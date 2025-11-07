#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        char str[n+1];
        scanf("%s",str);
        int z=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                  if(str[i]!=str[j])
                  z=1;
                }
            }
        }
        if(z==1)
            printf("NO\n");
        else
            printf("YES\n");

    }

    return 0;
}
