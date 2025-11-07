#include<stdio.h>
int main()
{
    int i, t, p, q, sub, count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&p,&q);
        sub=q-p;
        if(sub>1)
            count++;
    }
    printf("%d",count);


    return 0;
}
