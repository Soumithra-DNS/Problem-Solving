#include<stdio.h>
int main()
{
    int n,k,i,sum=0,count=0;
    scanf("%d %d",&n,&k);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]+k<=5)
            count++;
    }
    printf("%d",count/3);

    return 0;
}
