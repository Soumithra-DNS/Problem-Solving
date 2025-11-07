#include<stdio.h>

int main()
{
 char str[100],letter;
 int i,digit[10],j=0;
 //scanf("%[^\n]s",str);
 for(letter='0';letter<=9;letter++){
    str[j]=letter;
    j++;
 }
 for(i=0;i<10;i++)
    digit[i]=0;
 for(i=0;str[i]!='\0';i++){
    if(str[i]>='0' && str[i]<='9')
    digit[str[i]-48]++;

}
for(i=0;i<10;i++){
    if(digit[i]>0)
    printf("%d=%d\n",i,digit[i]);
    }
}

