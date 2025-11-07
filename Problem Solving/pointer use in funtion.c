#include<stdio.h>
int sum(int *p)
{
    for(int i=0;i<10;i++){
        int s=s+*p;
        printf("%d\n",s);
    }
}
int main()
{
    int a[10],b;
    b=&a[0];
   sum(b);
    return 0;
}
