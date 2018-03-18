#include<stdio.h>

long long reverse(long long int n);

int main()
{
    int i, c=0, t;
    long long int a, b;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld", &a);

        b=reverse(a);

        while(a!=b)
        {
            a = (a+b);
            b = reverse(a);
            c++;
        }
        printf("%d %lld\n", c, a);
        c=0;
    }
    return 0;
}

long long reverse(long long int n)
{
    long long int i=0;

    while(n>0)
    {
        i=(i*10)+(n%10);
        n=n/10;
    }
    return i;
}
