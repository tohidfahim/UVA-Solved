#include<stdio.h>

int main()
{
    long int a, b, c, i, s, d;

    while(scanf("%ld", &c)==1){

    for(i=1; i<=c; i++)
    {
        scanf("%ld %ld", &s, &d);
        if(d>s || (s-d)%2==1) printf("impossible\n");
        else{
        a=(s+d)/2;
        b=s-a;

        printf("%ld %ld\n", a, b);}

    }
    }
    return 0;
}
