#include<stdio.h>
int main()
{
    int i, j, t, sum1=0, sum2=0;
    char str[7];
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%s",str);
        for(j=0;j<3;j++){
            sum1=sum1+str[j]-48;
        }

        for(j=3;j<6;j++){
            sum2=sum2+str[j]-48;
        }

        if(sum1==sum2)
            printf("YES\n");
        else
            printf("NO\n");

        sum1=0;
        sum2=0;

    }
    return 0;
}
