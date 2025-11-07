#include<stdio.h>
int main()
{
    int s,i;
    s=0;
    i=1;
    again:
        s=s+i;
i++;

    if(i<10)
    goto again;
    printf("%d",s);
return 0;
}
