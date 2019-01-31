#include<stdio.h>
 int main(void)
{
	long long int i,T,v,X;
	scanf("%lld",&T);
	long long int arr[1500],prd[1500];

	for(i=0;i<T;i++)
	{
                scanf("%lld",&v);
		if(v==0){
			printf("1");
		}{
		X=v;
		long long int j=0;
		while(X){
			arr[j++]=X%10;
			X=X/10;
		}
		long long int length =j;
		long long int c=0;
		j=0;
		for(long long int k=v-1;k>1;k--)
		{
			long long int s=0;
			c=0;
			for(long long int h=0;h<length;h++)
			{
				s= (arr[h]*k+c);
				c=s/10;
				s=s%10;
				prd[h]=s;
			}
			while(c>0)
			{
				prd[length++]=c%10;
				c=c/10;

			}

			for(long long int h=0;h<length;h++)
			{
				arr[h]=prd[h];
			}
		
        }
			for(long long int q=0;q < length;q++)
			printf("%lld",arr[length-1-q]);
		printf("\n");}
	}
	 return 0;
}

