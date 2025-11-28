#include<stdio.h>

  int main()
  {
      int n,m,temp;
      scanf("%d %d",&n,&m);
      int a[m];
       for(int i=0;i<m;i++)
      {
         scanf("%d",&a[i]);
      }

      for(int i=0;i<m;i++)
      {
          for(int j=i;j<m;j++)
          {
              if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
          }
      }
          for(int i=0;i<m;i++)
      {
         printf("%d ",a[i]);
      }
      return 0;
  }
