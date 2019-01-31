#include<stdio.h>
long long int arr1[1000002];
char arr[1000002];
long long int sub[1000002];
int main(void)
{   
    long long int N,M,T,i,j,k,l=0,max=0,num=0;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        max = 0;
        l=0;
        for (j = 0;j < 1000002; j++) {
            arr1[j] =0;
            sub[j]=0;
        }
        scanf("%lld %lld",&N,&M);
        scanf("%s",arr);
       k = 1;
        for (j = 0; j < N; j++) {
            if (arr[j] == 'd') {
                k++;
                arr1[k] += arr1[k-1];
            }
            else arr1[k]++;
        }
        long long int N1 = k;
        for (k = N1; k >= M; k--, l++) {
            sub[l] = arr1[k] - arr1[k-M];
        }
        for (k = M-1; k >= 0; k--, l++) {
            sub[l] = arr1[k];
        }
        max = sub[0];
        for (k = 0; k <= N1; k++) {
            if (sub[k] > max) {
                max = sub[k];
            }
        }
        if (N1-1 <= M)
         {
            printf("%lld\n", N);
            continue;
        }
        printf("%lld\n", max+M);
    }
    return 0;
}
