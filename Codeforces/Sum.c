#include<stdio.h>
int main()
{
    int array[3],t,i,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&array[j]);
        }
        for(int j=0;j<3;j++){
            for(int k=j;k<3;k++){
                if(array[j]>array[k]){
                    temp=array[j];
                    array[j]=array[k];
                    array[k]=temp;
                }

            }
        }
        if(array[0]+array[1]==array[2])
            printf("YES\n");
        else
            printf("NO\n");

    }


    return 0;
}
