#include<stdio.h>
int main()
{
    int a,b,i,t,z;
    char str[4];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",str);

        a=str[0]-48;
        b=str[2]-48;
        z=a+b;
        printf("%d\n",z);
    }
    return 0;
}
