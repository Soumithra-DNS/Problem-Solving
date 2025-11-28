#include<stdio.h>
int main()
{
    int t,i,j,count=0;
    char str[5];
    scanf("%d",&t);
    for(j=0;j<t;j++){
       scanf("%s",str);

          if(str[0]=='Y' || str[0]=='y')
            count++;
          if(str[1]=='E' || str[1]=='e')
            count++;
          if(str[2]=='S' ||str[2]=='s')
            count++;

       if(count==3)
            printf("YES\n");
       else
            printf("NO\n");

        count=0;
    }

    return 0;
}
