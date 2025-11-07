#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        long long int x;
        n=n/2;
        x=pow(2, n);
        printf("%d\n",x);
    }
    else
        printf("0\n");

    return 0;
}
