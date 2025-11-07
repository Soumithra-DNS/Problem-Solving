#include<stdio.h>
void main(){
    char str[10];
    int i;
    for(i=0;i<10;i++)
        str[i]=65+i;
    printf("%s\n",str);

    for(i=5;i<8;i++)
        str[i]=92+i;
    printf("%s\n",str);
    do{
        str[i]=40+i;
        i++;
    }while(i<10);
    printf("%s\n",str);

    while(1){
        str[i]=40+i;
    };
    printf("%s\n",str);
}
