#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);

    printf("I hate ");
    while(i<=n)
    {
     if(i%2==0)
        printf("that I love ");
     else if(i%2==1)
        printf("that I hate ");
    i++;
    }
    printf("it");
    return 0;
}
