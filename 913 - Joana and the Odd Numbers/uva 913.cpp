#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    long long int a,n;
    while(scanf("%lld",&n)==1)
    {
        a=(((n*(n+2)/2)*3)-6);
        cout << a << endl;
    }
    return 0;
}
