#include<stdio.h>
int main()
{
    int a[10],i,even_sum=0,odd_sum=0,e_counte=0,o_counte=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
            e_counte=e_counte+1;
        }
        else
        {
            odd_sum=odd_sum+a[i];
            o_counte=o_counte+1;
        }
    }
    printf("Even avg:%f\n",(float)even_sum/e_counte);
    printf("Odd avg:%f\n",(float)odd_sum/o_counte);
}
