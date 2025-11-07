#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[105];
        scanf("%s",str);
        int zero=0,n=0,count1=0,one=0;
        for(int i=0;str[i]!='\0';i++){
                n++;
            if(str[i]=='0')
                zero++;
            else if(str[i]=='1')
                one++;
        }
        if(one==0)
            printf("0\n");
        else{
            for(int i=0;str[i]!='1';i++){
                count1++;
            }
            for(int i=n-1;str[i]!='1';i--){
                count1++;
            }
            printf("%d\n",zero-count1);

        }
    }

    return 0;
}
