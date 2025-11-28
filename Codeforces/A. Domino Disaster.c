#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        int n;
        scanf("%d",&n);
        char str[n+2];
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='U'){
                str[i]='D';
            }
            else if(str[i]=='D'){
                str[i]='U';
            }
        }
        printf("%s",str);
        printf("\n");

    }
    return 0;
}
