#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1],x[n+1];
        scanf("%s",str);
        int a,b,j=0;
        for(int i=0;str[i]!='\0';i++){
           if(str[i+2]=='0' && str[i+3]!='0'){
            a=(str[i]-48)*10+(str[i+1]-48)+96;
            x[j]=a;
            j++;
            i+=2;
           }
           else{
            a=str[i]-48+96;
            x[j]=a;
            j++;
           }
        }
        x[j]='\0';

        printf("%s",x);
        printf("\n");
    }


    return 0;
}
