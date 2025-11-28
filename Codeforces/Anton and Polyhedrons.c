#include<stdio.h>
#include <ctype.h>
int main()
{
    int i, j, n, count=0, total=0;
    char str[50];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",str);

        for(j=0;str[j]!='\0';j++){
            count=count+(tolower(str[j])-96);
        }

        if(count==128)
            total=total+4;
        else if(count==31)
            total=total+6;
        else if(count==103)
            total=total+8;
        else if(count==96)
            total=total+12;
        else if(count==111)
            total=total+20;

        count=0;

    }
printf("%d",total);

    return 0;
}
