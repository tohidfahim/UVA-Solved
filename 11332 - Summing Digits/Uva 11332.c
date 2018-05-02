#include<stdio.h>

int main()
{
    long long int num, rem;

    while(scanf("%lld", &num)==1)
    {
        if(num==0)
        {
            break;
        }
        while(num>9)
        {
            rem = (num%10);
            num = (num/10);
            num = num+rem;
        }
        printf("%lld\n", num);
    }
    return 0;
}
