#include<stdio.h>

int main()
{
    char string[100];
    int count,a,b;

    scanf("%s",string);

    if(string[0]>97){
        a=string[0]-97;
        b=26-a;
    }
    else{
        a=97-string[0];
        b=26-a;
    }
    if(a>b)
        count=b;
    else
        count=a;

    for(int i=0;string[i+1]!='\0';i++){

       if(string[i+1]>string[i]){
            a=string[i+1]-string[i];
            b=26-a;
        }
        else{
            a=string[i]-string[i+1];
            b=26-a;
        }

        if(a>b)
            count=count+b;
        else
            count=count+a;

    }
    printf("%d",count);

    return 0;

}s
