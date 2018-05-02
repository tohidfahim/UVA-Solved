#include <stdio.h>
#include <string.h>

int main ()
{
    int t, a=0, b=0;
    char c[100];

    scanf ("%d", &t);

    while (t)
     {
        scanf ("%s", c);
        if (strcmp (c, "donate")==0)
        {
            scanf ("%d", &b);
            a = a + b;
        }
        else
        printf ("%d\n", a);

        t--;
    }
    return 0;

}
