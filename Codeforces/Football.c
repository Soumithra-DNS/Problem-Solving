#include<stdio.h>
int main()
{
    int i, j, count=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==str[i+1]){
            for(j=i;j<i+7;j++){
                if(str[j]==str[i]){
                    count++;
                }
            }
            if(count==7){
                break;
            }

            count=0;
        }
    }
    if(count==7){
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
