#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);

        int z=0;
        for(int i=0;i<n;i++){
            if(str[i]!=str[i+1]){
              for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    z=1;
                    break;
                }
              }
            }
        }
        if(z==0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
