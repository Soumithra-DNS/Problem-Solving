#include<stdio.h>
int main()
{
    int t, i, j,l,k, n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int array[n],count=0;

        for(j=0;j<n;j++){
            scanf("%d",&array[j]);
        }

        if(n==1){
            printf("YES\n");
        }

        else
        {
         for(l=0;l<n;l++){
            for(k=l+1;k<n;k++){
                if(array[l]==array[k]){
                    count++;
                }
            }
         }

         if(count==0)
            printf("YES\n");
         else
            printf("NO\n");


        }
    }

    return 0;
}
