#include<stdio.h>
void main()
{
    int i,n,sum=0,k=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    k=n-1;
    char sign[k];
    int a[n];

    for(i=0;str[i]!='\0';i++)
    {
        a[i]=str[i]-48;
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i]+a[i+1];
        if(sum>1)
        {
            sign[i]='-';
            sum=0;
        }
        else
        {
            sign[i]='+';
            sum=sum;
        }

    }

    printf("%s",sign);
}
