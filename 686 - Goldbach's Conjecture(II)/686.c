#include<stdio.h>
#include<stdbool.h>
#define max 1000000
bool seive[max];
int main ()
{
    long int i,j,n,m,b;
    seive[1]=0;
    for (i=2;i<=max;i++)
        seive[i]=1;
    for (i=4;i<=max;i+=2)
        seive[i]=0;
        m=sqrt(max);
    for (i=3;i<=m;i+=2)
    {
        for (j=i*i;j<max;j+=2*i)
        {
            seive[j]=0;
        }
    }
    while(scanf("%ld",&n)==1&&n!=0)
    {
        b=0;
        for (i=n;i>=n/2;i--)
        {
            if (seive[i]==1&&seive[n-i]==1)
            {
                b++;
            }
        }
        printf("%ld\n",b);
    }
    return 0;
}

