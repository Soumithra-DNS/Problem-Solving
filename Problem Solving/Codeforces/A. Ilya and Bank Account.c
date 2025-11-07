#include<stdio.h>
#include<string.h>
int main()
{
    char acc[15];
    scanf("%s",acc);
    int size =strlen(acc);
    if(acc[0]=='-'){
       int x, y;
       x=(acc[size-1]-48);
       y=(acc[size-2]-48);
       if(x>y){
        acc[size-1]='\0';
       }
       else{
        acc[size-2]=acc[size-1];
        acc[size-1]='\0';
       }

       if(acc[1]=='0'){
        acc[0]='0';
        acc[1]='\0';
       }

        printf("%s",acc);
    }
    else
        printf("%s",acc);

    return 0;
}
