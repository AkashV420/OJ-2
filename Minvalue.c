#include<stdio.h>
int main()
{
    long long int t,n,q,l,r,x;
    long long int arr[1000006];
    long long int least;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&q);
        int i;
        for(i=0;i<=n;i++)
            arr[i]=0;
        least=0;
        for(i=0;i<q;i++)
        {
            scanf("%lld",&l);
            scanf("%lld",&r);
            scanf("%lld",&x);
            arr[l-1]+=x;
            arr[r]-=x;
        }
        //printf("%lld ",arr[0]);
        for(i=1;i<n;i++)
        {
            arr[i]=arr[i-1]+arr[i];
            //printf("%lld ",arr[i]);
            if(arr[i]<arr[least])
                least=i;
        }
        printf("%lld\n",least+1);
    }
    return 0;
}
