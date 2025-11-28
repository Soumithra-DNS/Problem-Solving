#include<stdio.h>
int main()
{
   int t, i, j, l, count=0;
   char str[10];
   scanf("%d",&t);
   for(i=0;i<t;i++){
    scanf("%s",str);

    for(j=0;str[j]!='\0';j++){
        if(str[j]<92){
          for(l=0;l<j;l++){
            if(str[l]==str[j]+32)
                count++;
          }

        }
    }
    if(count==3)
        printf("YES\n");
    else
        printf("NO\n");

    count=0;


   }

    return 0;
}
