#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i, j, k, len;

while(gets(s)){
    len = strlen(s);
    k=0;
for(i=0; i<=len; i++)
{
    if(s[i]==' '){
        for(j=i-1; j>=k; j--)
        printf("%c", s[j]);

        printf(" ");
        k=i;
        }
    else if(s[i]=='\0')
        for(j=i-1; j>k; j--)
        printf("%c", s[j]);
}


printf("\n");

}

return 0;
}
