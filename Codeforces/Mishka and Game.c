#include<stdio.h>
int main()
{
    int a,b,i,j,t,count1=0,count2=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a>b)
            count1++;
        else if(a<b)
            count2++;

    }
    if(count1>count2)
        printf("Mishka");
    else if(count1<count2)
        printf("Chris");
    else
        printf("Friendship is magic!^^");


    return 0;
}
