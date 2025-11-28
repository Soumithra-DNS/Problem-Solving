#include<stdio.h>
int main()
{
int a,b,c,d,n1,n2,n3,s;
scanf("%d%d%d%d",&a,&b,&c,&d);

if(a>b && a>c && a>d)
{
  n1=(b+c)-a;
  n2=(c+d)-a;
  n3=a-(n1+n2);
}
  else if(b>a && b>c && b>d)
{
  n1=(a+c)-b;
  n2=(c+d)-b;
  n3=b-(n1+n2);
}
else if(c>b && c>a && c>d)
{
  n1=(b+a)-c;
  n2=(a+d)-c;
  n3=c-(n1+n2);
}
else
{
    n1=(b+a)-d;
  n2=(a+c)-d;
  n3=d-(n1+n2);
}
    printf("%d %d %d",n1,n2,n3);

}
