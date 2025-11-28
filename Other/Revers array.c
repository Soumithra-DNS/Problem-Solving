#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n],temp,i;
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n/2;i++){
        temp=array[i];
        array[i]=array[n-1-i];
        array[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d\n",array[i]);
    return 0;
}
