
#include<stdio.h>

long long mod(long long a, long long b,long long mod) 
{ 
    long long res = 0; 
  
    a %= mod; 
  
   while (b) 
    { 
        if (b & 1) 
            res = (res + a) % mod; 
  
        a = (2 * a) % mod; 
  
        b >>= 1;   
    } 
  
    return res; 
} 

int main()
{
    long long int T,N,MOD,i,j,n,m,X=1,temp,temp1;
   // long long int result;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld %lld",&N,&MOD);
        X = 1;
      for(j=0;j<N;j++)
      {
          scanf("%lld %lld",&n,&m);
          if(n%2 == 0){
          temp = mod(n/2,(n+1),MOD);     
          }
          else
          temp = mod(n,(n+1)/2,MOD);  

         if(m%2 == 0){
          temp1 = mod(m/2,(m+1),MOD);     
          }
          else
          temp1 = mod(m,(m+1)/2,MOD);

        long long a = mod(temp,temp1,MOD);
   //      X = ((X%MOD)*a)%MOD;
  //        X=a;
          X=mod(X,a,MOD);

      }
          printf("%lld\n",X);   

    }
    return 0;
        
}

