#include<stdio.h>
int main()
{
    int a,b,m=0,i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d%d",&a,&b);
        m=a%b;
        if(m=0)
        printf("%d\n",m);
        else
        {
        for(i=1;i<b;i++)
        {

            if((a+i)%b==0)
            printf("%d\n",i);
        }
        }

    }
}

