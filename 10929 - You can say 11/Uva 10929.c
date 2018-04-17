#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int b, c, i, l;

    while(gets(a))
    {
        b=0;
        l=strlen(a);

        if(l==1 && a[0]=='0') break;

        for(i=0; i<l; i++)
        {
            c=b*10+(a[i]-'0');
            b=c%11;
        }

        if( b==0 ) printf("%s is a multiple of 11.\n", a);
        else printf("%s is not a multiple of 11.\n", a);
    }
    return 0;
}

