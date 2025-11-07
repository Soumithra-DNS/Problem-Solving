#include<stdio.h>
int main()
{
    int n1,n2,n;
    printf("Enter array1 and array2 size:  ");
    scanf("%d %d",&n1,&n2);
    n=n1+n2;
    int array1[n1],array2[n1],array[n],i;
    printf("Enter array1: ");
    for(i=0;i<n1;i++)
        scanf("%d",&array1[i]);
    printf("Enter array2: ");
    for(i=0;i<n2;i++)
        scanf("%d",&array2[i]);
    /*for(i=0;i<n1;i++){
        array[i]=array1[i];
    }
    for(i=0;i<n2;i++){
        array[i+n1]=array2[i];
    }*/
    for(i=0;i<n;i++){
        if(i<n1)
            array[i]=array1[i];
        else if(i>=n1)
            array[i]=array2[i-n1];

    }
    for(i=0;i<n;i++)
        printf("%d",array[i]);


    return 0;
}
