#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, t, tempnum;
    double temp;
    char a[10];
    int b[10];

    cin >> t;
    getchar();

    for(i=1; i<=t; i++){
           gets(a);
        for(j=0; j<3; j++){
            b[j]=a[j]-65;
        }
        temp = b[0]*pow(26, 2) + b[1]*pow(26, 1) + b[2];

        for(j=4; j<8; j++){
            b[j] = a[j] - '0';
        }
        tempnum=b[4]*1000+b[5]*100+b[6]*10+b[7]*1;

        if(abs(temp - tempnum)<100) printf("nice\n");
        else printf("not nice");

        temp=0, tempnum=0;
    }


    return 0;
}
