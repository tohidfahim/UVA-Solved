#include<stdio.h>

int main()
{
int a, b, c, i, j, n, t, sum;

while(scanf("%d", &t)==1)
    {
    for(i=0; i<t; i++)
        {
        sum=0;
        scanf("%d", &n);

        for(j=0; j<n; j++)
            {
            scanf("%d %d %d", &a, &b, &c);
            sum = sum + a*c;
            }
        printf("%d\n", sum);
        }
    }
return 0;
}
