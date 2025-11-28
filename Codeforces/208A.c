#include<stdio.h>
int main()
{
    char str[201];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='W'){
           if(str[i+1]=='U') {
              if(str[i+2]=='B'){
                str[i]='0';
                str[i+1]='0';
                str[i+2]='0';
              }
           }
        }
    }
    int z=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0'){
            printf("%c",str[i]);
            z=1;
        }
        else{
            if(z==1)
                printf(" ");

            z=0;
        }
    }

    return 0;
}
