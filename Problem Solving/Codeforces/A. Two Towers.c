#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int m, n;
        scanf("%d %d",&m,&n);

        char tow1[m+1],tow2[n+1];
        scanf("%s %s",tow1,tow2);
        int z=0,x=0,count=0;

        if((tow1[m-1]==tow1[m-2]) && (tow2[n-1]==tow2[n-2]))
            printf("NO\n");
        else{
        if(tow1[m-1]==tow2[n-1]){
            for(int i=0;i<m-1;i++){
                if(tow1[i]==tow1[i+1]){
                    x=1;
                    printf("NO\n");
                    break;
                }
            }
            if(x==0){
                for(int i=0;i<n-1;i++){
                    if(tow2[i]==tow2[i+1]){
                        x=1;
                        printf("NO\n");
                        break;
                    }
                }
            }
            if(x==0)
              printf("YES\n");
        }
        else{
            for(int i=0;i<m-1;i++){
                if(tow1[i]==tow1[i+1]){
                    count++;
                }
            }
            for(int i=0;i<n-1;i++){
                if(tow2[i]==tow2[i+1]){
                  count++;
                }
            }
            if(count<2)
                printf("YES\n");
            else
                printf("NO\n");

    }/**/
    }
    }

    return 0;
}
