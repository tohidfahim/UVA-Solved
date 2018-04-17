#include<stdio.h>

int main()
{
    long long int n, i, f, m, k;

    while(scanf("%lld", &n)==1)
    {
        if(n==0) break;

        f=0;
        m=1;

        for(i=1; i<=n; i++)
        {
            k=f+m;
            f=m;
            m=k;
        }
        printf("%lld\n",k);
    }
    return 0;
}

