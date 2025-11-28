#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int n, step=0,k=1,j;
        scanf("%lld",&n);
        if(n==1)
            printf("0\n");
        else{

           for(j=3;j<=n;j+=2){
            step=step+(((2*j)+2*(j-2))*k);
            k++;
           }

           printf("%lld\n",step);
        }
    }
    return 0;
}
