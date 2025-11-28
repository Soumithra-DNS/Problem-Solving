#include<stdio.h>
int main()
{
    int array[3], i, j, temp, minu;
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    if(array[0]+array[1]>array[2])
        printf("0");
    else{
        minu=array[2]-array[0]-array[1]+1;

        printf("%d",minu);

    }

    return 0;
}



