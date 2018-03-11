#include <stdio.h>

int main()
{
    int i, j;
    char s[1000];

while(gets(s)){
        j=0;

    for(i=0; s[i]!='\0'; i++){

        if( ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) && (s[i+1]<'a'||s[i+1]>'z') && (s[i+1]<'A'||s[i+1]>'Z') )
        j++;
      }
      printf("%d\n",j);
    }

    return 0;
}
