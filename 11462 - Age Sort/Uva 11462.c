#include<stdio.h>
int main()
{
    int a, i, j, c[2000001], temp;
    while(scanf("%d", &a)==1 && a!=0){
        for(i=1; i<=a; i++)
            scanf("%d", &c[i]);

        for(i=1; i<=a; i++)
        for(j=i+1; j<=a; j++){
            if(c[j]<c[i]){
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
            }
        }
        for(i=1; i<=a; i++)
        printf("%d ", c[i]);
        printf("\n");
    }
    return 0;
}
