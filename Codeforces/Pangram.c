#include<stdio.h>
int main()
{
    int i,j=0,sum=0,n,count[26];
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(j=0;j<26;j++){
        count[j]=0;
    }
    for(i=0;i<n;i++){
        if(str[i]>96){
           count[(str[i]-97)]=1;
        }
        else{
            count[(str[i]-65)]=1;
        }
    }
    for(j=0;j<26;j++){
       sum=sum+count[j];
    }
    if(sum==26)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
