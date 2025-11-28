#include<stdio.h>

int main()
{
    int i,j;
    char str[100],temp='0';

    scanf("%s",str);
    //printf("%s",str);
    for(j=0;str[j]!='\0';j=j+2){
        for(i=j;str[i]!='\0';i=i+2){
            if(str[j]-48 > str[i]-48){
              temp=str[j];
              str[j]=str[i];
              str[i]=temp;
            }
        }
    }

    printf("%s",str);

    return 0;
}
