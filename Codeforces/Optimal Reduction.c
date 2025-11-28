#include<stdio.h>
int main()
{
    int t, i, temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);

        int array[n],array1[n],max,max_possition;

        for(int j=0;j<n;j++){
            scanf("%d",&array[j]);
            //array1[j]=array[j];
            if(j==0){
                max=array[j];
                max_possition=j;
            }
            else{
            if(max<array[j]){
                max=array[j];
                max_possition=j;
            }
            }
        }
        int z=1;

        for(int j=max_possition;j>0;j--){
            if(array[j]<array[j-1]){
                z=5;
                break;
            }
        }

        for(int j=max_possition;j<n-1;j++){
            if(array[j]<array[j+1]){
                z=5;
                break;
            }
        }

        if(z==5)
            printf("NO\n");
        else
            printf("YES\n");

        //opp1

       /* int count0=0,opp1=0;

        while(count0!=n){

            count0=0;

            for(int j=0;j<n;j++){

                if(array[j]>0){
                    for(int k=j;k<n;k++){

                        if(array[k]>0){
                            array[k]=array[k]-1;

                            if(k==n-1){
                                opp1++;
                            }
                        }
                        else{
                            opp1++;
                            j=k;
                            break;
                        }

                    }

                    j=-1;
                }
                else
                    count0++;
            }
        }


        //sorting

        for(int j=0;j<n;j++){
            for(int k=j;k<n;k++){
                if(array1[j]>array1[k]){
                    temp=array1[j];
                    array1[j]=array1[k];
                    array1[k]=temp;
                }
            }
        }

        //opp2

        int opp2=0;
        count0=0;

        while(count0!=n){
            count0=0;
            for(int j=0;j<n;j++){
                if(array1[j]>0){
                    array1[j]-=1;
                    if(j==n-1)
                        opp2++;
                }
                else
                    count0++;
            }
        }

        if(opp1<=opp2)
            printf("YES\n");
        else
            printf("NO\n");*/


    }
    return 0;
}
