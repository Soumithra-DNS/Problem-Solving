#include<stdio.h>
int main()
{
    int t, i, s, x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&s);
        x=s;
        while(s>9)
        {
        x=x+s/10;
        s=s%10+s/10;

        }
        printf("%d\n",x);

    }


    return 0;
}
