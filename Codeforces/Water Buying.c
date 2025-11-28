#include<stdio.h>
int main()
{
    long long int t, i, n, a, b, c, x, y;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld %lld %lld",&n,&a,&b);
        if(a*2<b){
           b=a*2;
        }

        if(n%2==0){
           x=(n/2)*b;
        }
        else{
          x=(n/2)*b+a;
        }
        printf("%lld\n",x);

    }

    return 0;
}
