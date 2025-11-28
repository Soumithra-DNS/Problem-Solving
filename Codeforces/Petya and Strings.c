#include<stdio.h>
#include <ctype.h>
int main()
{
    int i, j, k, count,sum1=0,sum2=0;
    char str1[105],str2[105];
    scanf("%s",str1);
    scanf("%s",str2);

    for(i=0;str1[i]!='\0';i++){

        if(tolower(str1[i])==tolower(str2[i]))
            count=i;
        else
            break;
    }

    for(j=0;str1[j]!='\0';j++){
        k=j;
    }

    if(count==k)
        printf("0");
    else if(tolower(str1[i])<tolower(str2[i]))
            printf("-1");
    else if(tolower(str1[i])>tolower(str2[i]))
            printf("1");

    return 0;
}
