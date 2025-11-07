#include<stdio.h>
int main()
{
    int x,y,n,i,t,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&x,&y,&n);

    for(i=0;(i*x)+y<=n;i++){
        k=(i*x)+y;
    }
    printf("%d",k);
    }
}
