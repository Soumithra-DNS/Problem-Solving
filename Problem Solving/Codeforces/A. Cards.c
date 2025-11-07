#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int z=0,one=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='n'){
            one++;
        }

        else if(str[i]=='z'){
            z++;
        }
    }
    while(one>0){
        printf("1 ");
        one--;
    }
    while(z>0){
    printf("0 ");
    z--;
}

    return 0;
}
