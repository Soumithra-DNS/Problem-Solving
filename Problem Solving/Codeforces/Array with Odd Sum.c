#include<stdio.h>
int main()
{
    int t, i, n;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        int  even=0,odd=0,sum=0;

        scanf("%d",&n);

        int array[n];
        for(int j=0;j<n;j++){
            scanf("%d",&array[j]);
            if(array[j]%2!=0 || array[j]==1)
                odd++;
            else
                even++;

            sum=sum+array[j];
        }

        if(sum%2!=0 || sum==1)
           printf("YES\n");
        else{
            if(odd!=0 && even!=0)
                printf("YES\n");
            else
                printf("NO\n");

        }


    }

    return 0;
}
