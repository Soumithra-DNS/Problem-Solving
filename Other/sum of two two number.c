/*sum=num[0]+num[1],sum=num[2]+num[3],sum=num[4]+num[5]*/


#include<stdio.h>

int main()
{
    int num[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i=i+2){
        printf("Sum of %d and %d is %d\n",num[i],num[i+1],num[i]+num[i+1]);
    }
    return 0;
}
