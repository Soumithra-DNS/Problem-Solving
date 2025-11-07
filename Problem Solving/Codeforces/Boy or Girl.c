#include<stdio.h>
int main()
{
    int i, j,x, count[26],sum=0;
    char  name[102];
    scanf("%s",name);
    for(i=0;i<26;i++){
        count[i]=0;
    }
    for(j=0;name[j]!='\0';j++){
        x=name[j]-97;
        if(count[x]==0)
            count[x]++;
    }
    for(i=0;i<26;i++){
        sum=sum+count[i];
    }

    if(sum%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
