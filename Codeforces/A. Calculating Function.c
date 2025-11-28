#include<stdio.h>
int main()
{
    long long int n,sum,x,y;
    scanf("%lld",&n);

    if(n%2==0){
        sum=(n/2);
    }
    else{
        x=n-1;
        sum=(x/2)-n;
    }

    printf("%lld\n",sum);
    return 0;
}
