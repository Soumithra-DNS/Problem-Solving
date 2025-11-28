#include<stdio.h>
void main()
{
    int marks[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter mark= ");
        scanf("%d",&marks[i]);
    }
    int max_mark=marks[0];
    for(i=1;i<5;i++)
    {
        if(max_mark<marks[i])
        max_mark=marks[i];
    }
    printf("Max_mark:%d",max_mark);
}
