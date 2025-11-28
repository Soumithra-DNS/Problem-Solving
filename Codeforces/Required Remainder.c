#include<stdio.h>
int main()
{
int x,y,n,j,t,k;
scanf("%d",&t);
for(j=0;j<t;j++)
{
    scanf("%d%d%d",&x,&y,&n);
    int a=(n-y)/x;
    k=a*x+y;

    printf("%d\n",k);
}
return 0;
}
