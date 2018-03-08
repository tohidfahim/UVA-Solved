#include<stdio.h>

int main()
{
    int a, c[1001], i, j, k, l, t, temp;
    scanf("%d", &t);

    for(l=1; l<=t;l++){
    scanf("%d", &a);
        {
        for(i=1; i<=a; i++)
            scanf("%d", &c[i]);
            k=0;
        for(i=1; i<=a; i++)
        for(j=i+1; j<=a; j++){
            if(c[j]<c[i]){
        k++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", k);
    }
    }
    return 0;
}
