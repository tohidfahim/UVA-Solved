#include<stdio.h>
int main()
{
    int a, b=0, i;

    while(scanf("%d", &a)==1)
    {
        if(a==0) break;
        else
        for(i=a; i>=1; i--)
            b=b+(i*i);
            printf("%d\n", b);
            b=0;
    }
    return 0;
}
