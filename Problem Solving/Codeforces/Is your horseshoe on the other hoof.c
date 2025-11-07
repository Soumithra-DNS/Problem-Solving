#include<stdio.h>
int main()
{
    int array[4],i,j,k,count=0,temp;
    for(i=0;i<4;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
                if(array[i]>array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
        }
    }

    for(k=0;k<3;k++){
        if(array[k]==array[k+1]){
        count++;
        }
    }

    printf("%d",count);


    return 0;
}
