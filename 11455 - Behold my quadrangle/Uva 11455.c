#include<stdio.h>

int main()
{
    int i, a, b, c, d;

    scanf("%d", &a);

    for(i=1; i<=a; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if((a+b+c>d) && (b+c+d>a) && (c+d+a>b) && (d+a+b>c)) printf("quadrangle\n");
        else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c)) printf("rectangle\n");
        else if(a==b && b==c && c==d ) printf("square\n");
        else printf("banana\n");
    }
    return 0;
}
