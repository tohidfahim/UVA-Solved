#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, i, j, t;
    while(scanf("%d %d", &a, &b)==2)
    {
        if(a==0 && b==0) break;

        else
            {
        j=0;
        for(i=a; i<=b; i++)
        {
           c=sqrt(i);
           if(c*c == i) j++;
        }
        printf("%d\n", j);
            }
    }
return 0;
}
