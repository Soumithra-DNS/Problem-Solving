#include<stdio.h>
int main()
{
    int i,j,t,k=0;
    char str[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
            k++;
        if(k>10)
            printf("%c%d%c\n",str[0],k-2,str[k-1]);
        else
            printf("%s\n",str);
        k=0;


    }
 return 0;
}
