#include<stdio.h>
int main()
{
    int t,h,m,z,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&h ,&m);
        z=1440-(h*60+m);
        printf("%d\n",z);
    }
    return 0;
}
