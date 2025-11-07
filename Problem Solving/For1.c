#include<stdio.h>
void main()
{
    int a[10],i,count_even=0,count_odd=0,even_s=0,odd_s=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_s=even_s+a[i];
            count_even=count_even+1;
        }
        else
        {
            odd_s=odd_s+a[i];
            count_odd=count_odd+1;
        }
    }
     printf("Avg of even:%d\n",even_s/count_even);
     printf("Avg of odd:%d\n",odd_s/count_odd);
     printf("Number of even:%d\n",count_even);
     printf("Number of odd:%d\n",count_odd);

}
