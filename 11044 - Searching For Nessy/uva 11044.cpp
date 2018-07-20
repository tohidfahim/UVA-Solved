#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
   int a, b, t, i;
   scanf("%d",&t);

   for(i=1; i<=t; i++)
   {
      scanf("%d %d", &a, &b);
      printf("%d\n",(a/3)*(b/3));
   }
}
