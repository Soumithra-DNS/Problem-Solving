#include<stdio.h>
int main()
{
    char str2[]="314159265358979323846264338327";
    int t, i, j, count=0;
    char str1[50];

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%s",str1);

        for(j=0;str1[j]!='\0';j++){
            if(str1[j]==str2[j]){
                count++;
            }
            if(str1[j]!=str2[j])
                break;

        }

        printf("%d\n\n\n",count);
        count=0;
    }

    return 0;
}
