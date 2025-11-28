
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],s1[50],s2[50];
    scanf("%s",&s);
    int l=strlen(s);
   for(int i=0;i<l/2;i++)
   {
       s1[i]=s[i];
   }
   for(int j=l/2,i=0;j<l;j++,i++)
   {
       s2[i]=s[j];
   }
   printf("%s %s",s1,s2);
   return 0;


}
