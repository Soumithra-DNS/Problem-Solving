#include<stdio.h>

int main()
{
    int x,t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&x);

        if(x%2==0)
            printf("%d\n",x/2);

        else
            printf("%d\n",x/2 + 1);
    }

    return 0;
}
