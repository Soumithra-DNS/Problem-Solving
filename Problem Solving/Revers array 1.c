#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n],a[n],temp,i;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        a[n-1-i]=array[i];
    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
