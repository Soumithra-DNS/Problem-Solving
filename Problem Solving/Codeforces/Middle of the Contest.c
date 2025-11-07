#include<stdio.h>
int main()
{
    int h1, h2, m1, m2;
    char ch1,ch2;
    scanf("%d %c %d",&h1,&ch1,&m1);
    scanf("%d %c %d",&h2,&ch2,&m2);
    int plus_time;
    if(m1>m2)
        plus_time=((h2-h1)*60-(m1-m2))/2;
    else
        plus_time=((h2-h1)*60+(m2-m1))/2;

    h1=h1+(plus_time/60);
    plus_time=plus_time-(plus_time/60)*60;
    m1=m1+(plus_time%60);
    if(m1>=60){
        h1=h1+1;
        m1=m1-60;
    }



    printf("%.2d%c%.2d",h1,ch1,m1);

    return 0;
}
