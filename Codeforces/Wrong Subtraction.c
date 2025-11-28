#include<stdio.h>
int main()
{
    char n[100];
    int k,i,j,count=0;
    scanf("%s",n);
    scanf("%d",&k);
    for(j=0;n[j]!='\0';j++){
        count++;
    }

    for(i=0;i<k;i++){
        if(n[count-1]=='0'){
           n[count-1]='\0';
           count=count-1;
        }
        else{
            n[count-1]=n[count-1]-1;
        }
    }

    printf("%s",n);

    return 0;
}
