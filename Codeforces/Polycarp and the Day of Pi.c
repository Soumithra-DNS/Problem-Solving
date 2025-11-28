#include<stdio.h>
int main()
{
    char pi[]="314159265358979323846264338327";
    int t, i, j, count=0;
    char str[50];

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%s",str);

        for(j=0;str[j]!='\0';j++){
            if(str[j]==pi[j]){
                count++;
            }
            else
                break;

        }

        printf("%d\n",count);
        count=0;
    }

    return 0;
}
