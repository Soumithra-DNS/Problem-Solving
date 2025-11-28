#include<stdio.h>
int main()
{
    int t, i, j,z ,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int count2=0;

        scanf("%d",&n);
        int array[n];
        for(j=0;j<n;j++){
            scanf("%d",&array[j]);
            if(array[j]==2)
                count2++;
        }

        if(count2%2==0){
           int half=count2/2;

            for(j=0;j<n;j++){
                if(array[j]==2)
                    half--;
                if(half==0){
                    printf("%d\n",j+1);
                    break;
                }
            }
        }
        else
            printf("-1\n");
    }

    return 0;
}
