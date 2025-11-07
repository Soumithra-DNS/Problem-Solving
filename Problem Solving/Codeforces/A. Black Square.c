#include<stdio.h>
int main()
{
   int arr[4];
   for(int i=0;i<4;i++)
    scanf("%d",&arr[i]);

   char str[100000];
   scanf("%s",str);
   int sum=0;
   for(int i=0;str[i]!='\0';i++){
    int z=str[i]-49;
    sum+=arr[z];
   }

   printf("%d\n",sum);

    return 0;
}
