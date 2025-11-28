#include<stdio.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    if(str[0]>96){
        str[0]=str[0]-32;
    }
    printf("%s",str);

    return 0;
}
