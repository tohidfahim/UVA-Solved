#include<stdio.h>
int main()
{
    int a, b, i, j, k, l, t, n;

    while(scanf("%d", &t)==1){
            printf("\n");

    for(l=1; l<=t; l++)
        {
            scanf("%d %d", &a, &b);
    for(n=1; n<=b; n++){

        for(i=1; i<=a; i++){
                for(j=1; j<=i; j++)
            printf("%d", i);
            printf("\n");
        }

        for(k=i-2; k>=1; k--){
                for(j=1; j<=k; j++)
            printf("%d", k);
            printf("\n");
        }
        printf("\n");
    }
    }
    }
    return 0;
}

