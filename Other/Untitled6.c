#include<stdio.h>
int main()
{
    int h, m;
    char ch;
    scanf("%d%c%d",&h,&ch,&m);
    int a;
    scanf("%d",&a);
    int x=a/60;
    a=a%60;
    if(x!=24)
        h+=x;

    m+=a;
    if(m>59){
        h++;
        m-=60;
    }
    if(h>=24)
        h=h%24;

        printf("%.2d:%.2d",h,m);

    return 0;
}
