#include<stdio.h>

int main()
{
    int num, sum, i, j=1;

    while(scanf("%d", &num)==1)
    {
        if (j==1) printf("PERFECTION OUTPUT\n");
        j++;

        if(num == 0) break;

        sum=0;

        for(i=1; i<=num/2; i++)
        {
            if(num%i == 0) sum = sum + i;
        }

        if(sum == num) printf("%5d  PERFECT\n", num);
        else if(sum > num) printf("%5d  ABUNDANT\n", num);
        else if(sum < num) printf("%5d  DEFICIENT\n", num);
    }
    printf("END OF OUTPUT\n");

    return 0;
}
