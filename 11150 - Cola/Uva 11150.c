#include <stdio.h>

int main()

{
    int a;
    while(scanf("%d", &a)==1)
        {
        printf("%d\n", a+(a/2)); /// 3=1, so empty 2.A bottle of Coco Cola for every 3 empty bottles returned
    }                            /// or 8==4up, 16==8up. so main/2
    return 0;
}

