#include<stdio.h>
int main()
{
    int age1, age2, year=0;
    scanf("%d %d",&age1,&age2);
    while(age1<=age2)
    {
        age1=age1*3;
        age2=age2*2;
        year++;
    }
    printf("%d",year);

    return 0;
}
