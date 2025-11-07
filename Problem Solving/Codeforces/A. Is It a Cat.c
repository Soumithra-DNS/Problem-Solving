#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[8]={77,109,69,101,79,111,87,119};
        char str[n+2];
        scanf("%s",str);
        int k=0,z=0;
        for(int i=0;i<n;i++){
            if(str[i]==arr[k] || str[i]==arr[k+1]){}

            else{
                k+=2;
                if(str[i]==arr[k] || str[i]==arr[k+1]){}
                else{
                    z=1;
                    printf("NO\n");
                    break;
                }

            }
        }
        if(k<6){
                if(z!=1){
                    printf("NO\n");
                }
        }
        else{
        if(z==0)
            printf("YES\n");
        }


    }
    return 0;
}
