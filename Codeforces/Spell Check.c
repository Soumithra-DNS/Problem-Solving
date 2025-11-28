#include<stdio.h>

int main()
{
    int n,i,t,count=0,j;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);

        if(n!=5)
            printf("NO\n");
        else{
        char name[n];
        scanf("%s",name);



        for(j=0;name[j]!='\0';j++){
           if(name[j]=='T' ||name[j]=='r' ||name[j]=='u'|| name[j]=='i' ||name[j]=='m' )
             count++;
           else
               break;
        }
        if(count==5){
            for(j=0;j<5;j++){
          for(int k=0;k<5;k++){
            if((name[j]==name[k]) && j!=k){
                count==0;
                break;
            }
          }
        }
            if(count==)
            printf("YES\n");
        }
        else
            printf("NO\n");
        }
        count=0;
    }
    return 0;
}
