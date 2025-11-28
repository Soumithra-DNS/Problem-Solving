#include<stdio.h>
int main()
{
    int x=5,w;
    int *p;
    int *q;
    p=&x;
    q=p+1;
    w=*p+1;
    printf("%d\n",q);
    printf("%d",w);


    return 0;
}
