#include<stdio.h>
int main()
{
long long int a;

while(scanf("%lld", &a)==1 && a>=0)
    {
        if(a==1) printf("0%%\n");
        else    printf("%lld%%\n", a*100/4);
    }
return 0;
}
