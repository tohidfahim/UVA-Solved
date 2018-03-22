#include<stdio.h>
int main()
{
    int a, c[1001], i, j, k, temp;

    while(scanf("%d", &a)==1){
        for(i=1; i<=a; i++)
            scanf("%d", &c[i]);
            k=0;
        for(i=1; i<=a; i++)
        for(j=i+1; j<=a; j++){
            if(c[j]<c[i]){
        k++;
            }
        }
        printf("Minimum exchange operations : %d\n", k);
    }
    return 0;
}
