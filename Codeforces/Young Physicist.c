#include<stdio.h>
int main()
{
    int t, i, a, b, c, sum1=0,sum2=0,sum3=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum1=sum1+a;
        sum2=sum2+b;
        sum3=sum3+c;
    }
    if(sum1==0 && sum2==0 && sum3==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
