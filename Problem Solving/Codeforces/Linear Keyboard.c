#include<stdio.h>
int main()
{
   int i, j, t, k, pos1, pos2, sub, sum=0;
   scanf("%d",&t);

   for(k=0;k<t;k++){

   char str1[100],str2[100];
   scanf("%s %s",str1,str2);

   for(i=0;str2[i+1]!='\0';i++){
    for(j=0;str1[j]!='\0';j++){
            if(str2[i]==str1[j]){
                pos1=j+1;
            }
            if(str2[i+1]==str1[j]){
               pos2=j+1;
            }

    }

    if(pos1>pos2){
        sub=pos1-pos2;
    }
    else
        sub=pos2-pos1;

    sum=sum+sub;
   }
   printf("%d\n",sum);
   sum=0;

   }
    return 0;
}
