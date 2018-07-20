#include<stdio.h>
#include<string.h>

int main()
{
int a, b, l, i, j;
char s1[100], s2[12];

while(scanf("%d", &a)==1 && a<10)
{
    if(a==0) break;
    scanf("%s", s1);

    l=strlen(s1);
    b=l-1/a;

for(i=0; i<l; i=i+b)
    {
    for(j=0; j<=b; j++, i++)
        {
            s2[j]=s1[i];
        }
    printf("%s", strrev(s2));
    }

    printf("\n");
}

return 0;
}
