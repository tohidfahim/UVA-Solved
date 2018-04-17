#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b[21], i, j, t, min=100, max=0;

    scanf("%d", &t);

    for(i=1; i<=t; i++){
        scanf("%d", &a);
        for(j=0; j<a; j++){
            scanf("%d", &b[j]);
        }
        for(j=0; j<a; j++){
            if(b[j]>max) max=b[j];
            if(b[j]<min) min=b[j];
        }
       printf("%d\n",(max-min)*2);
       min=100, max=0;
    }
    return 0;
}
