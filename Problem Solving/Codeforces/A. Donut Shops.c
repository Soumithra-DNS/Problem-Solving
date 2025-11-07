#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        long long int a, b, c;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>=c)
            printf("-1 ");
        else
            printf("1 ");
        if(a*b>c)
            printf("%lld\n",b);
        else
            printf("-1\n");
    }

    return 0;
}
