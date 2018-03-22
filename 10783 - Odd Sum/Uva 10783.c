#include<stdio.h>
int main()
{
    int a, b, c, i, j, sum=0;

    scanf("%d", &a);

    for(i=1; i<=a; i++){
        scanf("%d\n%d", &b, &c);
        for(j=b; j<=c; j++)
            if(j%2==1) sum=sum+j;

    printf("Case %d: %d\n", i, sum);
    sum=0;
    }
    return 0;
}
