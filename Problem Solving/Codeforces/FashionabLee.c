#include<stdio.h>
int main()
{
    int t, num, i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
       scanf("%d",&num);
       if(num%4==0)
          printf("YES\n");
       else
        printf("NO\n");
    }


    return 0;
}
