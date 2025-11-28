#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x;
        scanf("%d",&x);
        int arr[3],a,b,c;
        for(int j=0;j<3;j++){
            scanf("%d",&arr[j]);
        }
        a=arr[x-1];
        if(a==0)
            printf("NO\n");
        else{
           b=arr[a-1];

           if(b==0)
            printf("NO\n");
           else{
                c=arr[b-1];
                if(c==0)
                    printf("YES\n");
                else
                    printf("NO\n");
           }
        }


    }

    return 0;
}
