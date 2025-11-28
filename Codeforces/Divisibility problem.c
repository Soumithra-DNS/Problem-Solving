#include<stdio.h>
int main()
{
    int a,b,m=0,i;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        m=0;
    printf("%d",m);
    }
    else
    {
        for(i=1;i<b;i++)
        {
            m=m+1;
            if((a+i)%b==0)
                printf("%d",m);

        }
    }

}
