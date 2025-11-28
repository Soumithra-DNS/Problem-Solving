#include<stdio.h>
int main()
{
    long long int n,k,z,result;
    scanf("%lld %lld",&k,&n);

    if(k%2==0)
      z=k/2;
    else
        z=k/2+1;

    if(n<=z){
      result=n*2-1;
    }
    else
        result=(n-z)*2;

    printf("%lld",result);

    return 0;
}
