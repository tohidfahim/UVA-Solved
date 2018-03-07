#include<stdio.h>
int main()
{
    int a, b, i, j, temp, c=0, s=0;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
       printf("%d %d ", a, b);
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        for(i=a; i<=b; i++)
        {
            c=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                c++;
            }
            if(c>=s)
                s=c;
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
