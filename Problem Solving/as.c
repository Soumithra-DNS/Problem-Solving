#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        int h1,h2,m1,m2,ans;

        scanf("%d %d",&h1,&m1);
        h2=24-(h1+1);
        m2=60-m1;
        ans=(60*h2)+m2;
        printf("%d\n",ans);

    }
    return 0;
}
