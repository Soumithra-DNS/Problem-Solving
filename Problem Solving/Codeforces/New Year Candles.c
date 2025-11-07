#include<stdio.h>

int main()
{
    int a, b,i,j,m=0,z, h=0;
    scanf("%d%d",&a,&b);
    h=h+a;
    while(a>=b){
        m=a%b;
        h=h+a/b;
        a=a/b+m;
    }

    printf("%d",h);
    return 0;
}
