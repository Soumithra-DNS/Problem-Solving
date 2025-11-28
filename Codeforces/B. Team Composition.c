#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,min;
        scanf("%d %d",&a,&b);
        if(a>b)
            min=b;
        else
            min=a;
        int k=(a+b)/4;
        if(k<min)
            printf("%d\n",k);
        else
            printf("%d\n",min);

    }

    return 0;
}
