#include<stdio.h>
int main()
{
    int i, j, k=0, m, n, a[100];

    while(scanf("%d", &n)==1 && n!=0){
        while(1){
        for(i=0; n>0 ;i++){
                m=n%2;
                a[i]=m;
                n=n/2;
                } break;
        }
        for(j=0; j<i ;j++)
        if(a[j]==1) k++;
        printf("The parity of ");
        for(j=i-1; j>=0; j--) printf("%d", a[j]);
        printf(" is %d (mod 2).\n", k);
        k=0;
    }
    return 0;
}
