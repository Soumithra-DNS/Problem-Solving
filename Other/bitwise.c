/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char ch;
    ch=getche();
    printf("\n");
    for(i=128;i>0;i=i/2)
        if(i&ch)
        printf("1\n");
    else
        printf("0\n");


    return 0;
}*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char ch;
    ch='a';
    printf("\n");
    for(i=128;i>0;i=i/2)
        if(i|&ch)
        printf("1\n");
    else
        printf("0\n");


    ch=~ch;
    printf("\n");
    for(i=128;i>0;i=i/2)
        if(i&ch)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}

