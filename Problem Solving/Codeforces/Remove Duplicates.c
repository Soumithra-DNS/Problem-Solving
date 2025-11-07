#include<stdio.h>
int main()
{
    int i, j, k=0, count=0, n;
    scanf("%d",&n);
    int array[n],array1[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]!=array[j]){
                count++;
            }
        }

        if(count==n-1-i){
            array[k]=array[i];
            k++;
        }
        count=0;

    }
    printf("%d\n",k);
    for(i=0;i<k;i++){
        printf("%d ",array[i]);
    }


    return 0;

}
