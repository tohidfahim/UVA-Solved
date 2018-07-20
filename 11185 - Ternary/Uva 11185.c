#include<stdio.h>

void ter(int n) {
    if(n == 0)    return ;
    ter(n/3);
    printf("%d", n%3);
}

int main()
{
    int n;

    while(scanf("%d", &n) == 1 && n >= 0) {
        if(n == 0){
        printf("0\n");
        continue;
        }
        ter(n);
        printf("\n");
    }
    return 0;
}
