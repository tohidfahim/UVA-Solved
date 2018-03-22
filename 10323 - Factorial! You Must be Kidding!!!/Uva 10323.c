#include<stdio.h>
int main()
{
    int a, i, fac=1;
    while(scanf("%d", &a)==1){
        if((a>=0 && a<=7) || (a<0 && a%2==0)) printf("Underflow!\n");
        else if(a>=8 && a<=12){
            for(i=a; i>=1; i--)
                fac=fac*i;
            printf("%d\n", fac);
            fac=1;
        }
        else if(a==13) printf("6227020800\n");
        else printf("Overflow!\n");
    }
    return 0;
}
