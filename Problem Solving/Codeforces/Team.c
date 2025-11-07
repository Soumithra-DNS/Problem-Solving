#include<stdio.h>
int main()
{
    int i, j, t, a, b, c, sum, count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        if(sum>=2)
            count++;

    }
    printf("%d",count);

    return 0;
}
