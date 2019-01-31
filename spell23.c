#include <stdio.h>

int greater(int a, int b) {
    if (a < b)
        return b;
    return a;
}
        char string[1000500];
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, kmax;
        scanf("%d %d", &n, &kmax);
        int max = 0, k;
        scanf("%s",string);
        int j;
        k = kmax, j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && (string[j] == 'a' || k > 0)) {
                if (string[j] != 'a')
                  k--;
                j++;
            }
            max = greater(max, j-i);
            if (i == j) {
                j++;
            }
            else if (string[i] == 'd')
                k++;
        }
        printf("%d\n", max);
    }
    return 0;
}

