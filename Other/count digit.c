#include<stdio.h>

int main()
{
 char str[100];
 int i,digit[10];
 scanf("%[^\n]s",str);
 for(i=0;i<10;i++)
    digit[i]=0;
 for(i=0;str[i]!='\0';i++){
    if(str[i]=='0')
    digit[0]++;
    else if(str[i]=='1')
    digit[1]++;
    else if(str[i]=='2')
    digit[2]++;
    else if(str[i]=='3')
    digit[3]++;
    else if(str[i]=='4')
    digit[4]++;
    else if(str[i]=='5')
    digit[5]++;
    else if(str[i]=='6')
    digit[6]++;
    else if(str[i]=='7')
    digit[7]++;
    else if(str[i]=='8')
    digit[8]++;
    else if(str[i]=='9')
    digit[9]++;
}
for(i=0;i<10;i++){
    if(digit[i]>0)
    printf("%d=%d\n",i,digit[i]);
    }
}
