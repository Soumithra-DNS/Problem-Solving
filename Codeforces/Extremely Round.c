#include<stdio.h>
int main()
{
   int i, j, t, count=0;
   char num[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&num);
        count=0;

        for(j=0;num[j]!='\0';j++){

            if(num[j]!='0'){
                count=count+1;
            }
            else if(j%100==0){
                count=count+1;
            }
        }
        }

        printf("%d\n",count);

    }

    return 0;
}
