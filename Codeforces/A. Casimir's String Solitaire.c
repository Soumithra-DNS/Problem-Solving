#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--){
    char str[55];
    int a=0,b=0,c=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A')
            a++;
        else if(str[i]=='B')
            b++;
        else if(str[i]=='C')
            c++;
    }

    if(b==a+c)
        printf("YES\n");
    else
        printf("NO\n");
   }

    return 0;
}
