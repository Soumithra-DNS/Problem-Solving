#include<stdio.h>
int main()
{
    long long int t,ice,i,count=0;
    scanf("%lld %lld",&t,&ice);
    for(i=0;i<t;i++)
    {
      long long int n;
        char str;
        scanf("%s %lld",&str,&n);
        if(str=='+')
            ice+=n;
        else if(str=='-')
            ice-=n;
        if(ice<0)
        {
           ice+=n;
           count++;
        }
    }
    printf("%lld %lld",ice,count);
}
