#include<stdio.h>
int main()
{
    char ch;

    while(scanf("%c", &ch)==1)
    {
        if(ch=='P' || ch=='p') printf("i");

        else if(ch=='O' || ch=='o') printf("u");

        else if(ch=='I' || ch=='i') printf("y");

        else if(ch=='U' || ch=='u') printf("t");

        else if(ch=='Y' || ch=='y') printf("r");

        else if(ch=='T' || ch=='t') printf("e");

        else if(ch=='R' || ch=='r') printf("w");

        else if(ch=='E' || ch=='e') printf("q");

        else if(ch=='W' || ch=='w') printf("w");

        else if(ch=='Q' || ch=='q') printf("q");

        else if(ch=='L' || ch=='l') printf("j");

        else if(ch=='K' || ch=='k') printf("h");

        else if(ch=='J' || ch=='j') printf("g");

        else if(ch=='H' || ch=='h') printf("f");

        else if(ch=='G' || ch=='g') printf("d");

        else if(ch=='F' || ch=='f') printf("s");

        else if(ch=='D' || ch=='d') printf("a");

        else if(ch=='S' || ch=='s') printf("s");

        else if(ch=='A' || ch=='a') printf("a");

        else if(ch=='M' || ch=='m') printf("b");

        else if(ch=='N' || ch=='n') printf("v");

        else if(ch=='B' || ch=='b') printf("c");

        else if(ch=='V' || ch=='v') printf("x");

        else if(ch=='C' || ch=='c') printf("z");

        else if(ch=='X' || ch=='x') printf("x");

        else if(ch=='E' || ch=='z') printf("z");

        else if(ch=='.') printf("m");

        else if(ch==',') printf("n");

        else if(ch=='/') printf(",");

        else if(ch=='\'') printf("l");

        else if(ch==';') printf("k");

        else if(ch=='\\') printf("[");

        else if(ch==']') printf("p");

        else if(ch=='[') printf("o");

        else if(ch==' ') printf(" ");

        else if(ch=='\n') printf("\n");

    }
    return 0;
}
