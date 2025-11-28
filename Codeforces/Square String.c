#include<stdio.h>
int main()
{
    int t,i,j,k,count=0,count1=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char str[100];
        scanf("%s",str);
        for(int j=0;str[j]!='\0';j++){
            count++;
        }


        if(count%2==0){
           for(j=0,k=count/2;j<count/2;j++,k++) {
            if(str[j]==str[k]){
               count1++;
            }
           }
        }


        if(count%2==0){
           if(count1==count/2)
              printf("YES\n");
           else
              printf("NO\n");
        }
        else
            printf("NO\n");

            count1=0;
            count=0;
    }


    return 0;
}
