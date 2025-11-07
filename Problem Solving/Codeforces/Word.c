#include<stdio.h>
int main()
{
    int i, count1=0,count2=0;
    char str[1000];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>96)
            count1++;
        else
            count2++;
    }
    if(count1>=count2){
        for(i=0;str[i]!='\0';i++){
            if(str[i]<96){
                str[i]=str[i]+32;
            }
        }
    }
    else
    {
     for(i=0;str[i]!='\0';i++){
            if(str[i]>96){
                str[i]=str[i]-32;
            }
        }
    }
    printf("%s",str);

    return 0;
}
