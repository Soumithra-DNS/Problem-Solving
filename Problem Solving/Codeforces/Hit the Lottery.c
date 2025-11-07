#include<stdio.h>
int main()
{
    int array[5]={100,20,10,5,1}, i=0, dollars, num=0;

    scanf("%d",&dollars);
    while(dollars!=0)
    {
        num=num+dollars/array[i];
        if(dollars%array[i]>=0){
            dollars=dollars%array[i];
        }
        i++;
    }
    printf("%d",num);
    return 0;
}
