#include<stdio.h>
int main()
{
    int a[200],i,t,n,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);

        for(int j=0;j<(2*n);j++){
            scanf("%d",&a[j]);
        }

        for(int j=0;j<(2*n);j++){
            if(a[j]%2==0)
                count++;
        }

        if(count==n)
            printf("Yes\n");
        else
            printf("No\n");
        count=0;
    }

    return 0;
}
