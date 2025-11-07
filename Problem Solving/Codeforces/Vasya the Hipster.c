#include<stdio.h>
int main ()
{
    int r, b, d1, d2;
    scanf("%d %d",&r,&b);
    if(r<b){
        d1=r;
        b=b-r;
        d2=b/2;
    }
    else
    {
        d1=b;
        r=r-b;
        d2=r/2;
    }

    printf("%d %d",d1,d2);

    return 0;
}
