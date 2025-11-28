#include<stdio.h>

int main()
{
 char str[100]={'123'},j;
 int i,digit=0;
 //scanf("%[^\n]s",str);


 for(j='0';j<='9';j++){

    for(i=0;str[i]!='\0';i++){
        if(str[i]==j)
            digit++;

    }

        if(digit>0){
            printf("%c = %d\n",j,digit);
            digit=0;
        }


}
return 0;
}
