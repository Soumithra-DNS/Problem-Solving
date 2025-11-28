#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
            int n,z=0;
    scanf("%d",&n);
    char str1[n+1],str2[n+1];
    scanf("%s %s",str1,str2);
    for(int i=0;i<n;i++){
        if(str1[i]=='R' || str2[i]=='R'){
          if(str1[i]=='R' && str2[i]=='R') {}
          else{
            z=1;
            break;
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
