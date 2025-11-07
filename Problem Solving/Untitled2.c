#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int a=0,b=0,c=0;
    int arr[7]={100,50,20,10,5,2,1};
    for(int i=0;i<7;i++){
        a=n/arr[i];
        n=n%arr[i];
        printf("%d nota(s) de R$ %d,00\n",a,arr[i]);
        a=0;
    }

    return 0;
}
