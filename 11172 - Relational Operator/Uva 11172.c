#include<stdio.h>
int main()
{
    int a, b, c, i;

    scanf("%d", &a);

    for(i=1; i<=a; i++){
        scanf("%d %d", &b, &c);
        if(b>c) printf(">\n");
        else if(b<c) printf("<\n");
        else printf("=\n");
    }

    return 0;
}
