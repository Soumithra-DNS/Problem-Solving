#include<stdio.h>
int main()
{
    int t, z, n, i, j, k, temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int array[2*n];


        for(j=0;j<2*n;j++){
            scanf("%d",&array[j]);
            }


        for(j=0;j<n*2;j++){
            for(k=j;k<n*2;k++){
                if(array[j]>array[k]){
                    temp=array[j];
                    array[j]=array[k];
                    array[k]=temp;
                }
            }
        }



        if(array[n-1]>array[n])
            z=array[n-1]-array[n];

        else
            z=array[n]-array[n-1];

            printf("%d\n",z);

        }

    return 0;
}
