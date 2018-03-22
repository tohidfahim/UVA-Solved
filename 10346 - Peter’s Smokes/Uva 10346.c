#include<stdio.h>

int main()
{
    int i, j, k, n;

    while(scanf("%d %d", &n, &k)==2 && k>1){
         printf("%d\n", n+n/k+(n%k+n/k)/k);
    }
    return 0;
}
