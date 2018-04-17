#include<stdio.h>
#include<math.h>

int main()
{
    int  x, y=1;
    double u, v, t, a, s;

    while (scanf("%d",&x) && x!=0)
    {
        switch (x)
        {
        case 1:
            scanf("%lf %lf %lf", &u, &v, &t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n", y, s, a);
            break;

        case 2:
            scanf("%lf %lf %lf", &u, &v, &a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n", y, s, t);
            break;

        case 3:
            scanf("%lf %lf %lf", &u, &a, &s);
            t=(sqrt(u*u+2.0*s*a)-u)/a;
            v=u+a*t;
            printf("Case %d: %.3lf %.3lf\n", y, v, t);
            break;

        case 4:
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2.0*s*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", y, u, t);
            break;
        }
        y++;
    }
    return 0;
}
