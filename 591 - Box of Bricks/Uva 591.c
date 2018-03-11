#include<stdio.h>

int main()
{
    int i, j=1, a, b[100], c=0, d=0, e=0, avg=0;

    while(scanf("%d", &a)==1){
            if(a==0) break;
        for(i=0; i<a; i++) {
                scanf("%d", &b[i]);
                c=c+b[i];
        }

        avg=c/a;

        for(i=0; i<a; i++) {
                if(b[i]>avg) d=b[i]-avg;
                e=e+d;
                d=0;
                }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", j, e);
        j++;
    }
    return 0;
}
