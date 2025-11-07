#include<stdio.h>
int main()
{
  int W;
  scanf("%d",&W);

  if(W%2==0 && 2<W)
    printf("YES");
  else
    printf("NO");
}

