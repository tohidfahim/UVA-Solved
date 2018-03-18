#include <stdio.h>

int main()
{
    int i, j, num, t, temp;
    int digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&num);

        digit0=0, digit1=0, digit2=0, digit3=0, digit4=0, digit5=0, digit6=0, digit7=0, digit8=0, digit9=0;

        for(j=1;j<=num;j++)
        {
            temp=j;
            for(temp=j ;temp>0; temp=temp/10)
            {
                if(temp%10==0) digit0++;
                if(temp%10==1) digit1++;
                if(temp%10==2) digit2++;
                if(temp%10==3) digit3++;
                if(temp%10==4) digit4++;
                if(temp%10==5) digit5++;
                if(temp%10==6) digit6++;
                if(temp%10==7) digit7++;
                if(temp%10==8) digit8++;
                if(temp%10==9) digit9++;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", digit0, digit1, digit2 , digit3, digit4, digit5, digit6, digit7, digit8, digit9);
    }
    return 0;
}
