#include<stdio.h>
int main()
{
    int s,x;
    scanf("%d",&x);
    if(x%5==0)
    {
        s=x/5;
        printf("%d",s);
    }
    else
        {
        s=(x/5)+1;
        printf("%d",s);
        }
        return 0;
}
