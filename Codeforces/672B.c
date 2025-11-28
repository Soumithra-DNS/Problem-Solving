#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    if(n>26)
    {
      printf("-1");
    }
    else
    {
    int a[26]={};
    for(int i=0;str[i]!='\0';i++)
    {
       a[str[i]-97]++;
    }
    int sum=0;
    for(int i=0;i<26;i++)
    {
       if(a[i]>1)
       {
          a[i]--;
          sum+=a[i];
       }
    }
    printf("%d",sum);

    }

    return 0;
}
