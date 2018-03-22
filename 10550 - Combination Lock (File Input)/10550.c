#include <stdio.h>

int main()
{
    int c1, c2, c3, c4, temp, deg;
   /// freopen("in10550.txt", "r", stdin);
    while(scanf("%d %d %d %d", &c1, &c2, &c3, &c4)== 4 && !(c1==0 && c2==0 && c3==0 && c4==0))
        {
     deg=1080; ///for 1 & 3 (720+360)

     temp=c1-c2;
     if(temp<0) temp=temp+40;
     deg+=temp*9;

     temp=c3-c2;
     if(temp<0) temp=temp+40;
     deg+=temp*9;

     temp=c3-c4;
     if(temp<0) temp=temp+40;
     deg+=temp*9;

     printf("%d\n", deg);
       }

    return 0;
}
