#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,l,count=0;
   char str1[1000],str2[1000];
   scanf("%s %s",str1,str2);
   l=strlen(str1);

   for(i=0;i<l;i++){
    if(str1[i]==str2[l-1-i])
        count++;
   }
    if(count==l)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
