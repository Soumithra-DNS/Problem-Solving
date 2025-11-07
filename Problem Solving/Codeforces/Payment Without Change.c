#include<stdio.h>
int main()
{
    int t, a, b, n, s,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&n,&s);
        x=s/n;
        if(x>a){
            x=a;
            y=s-n*x;
        }

        else
        y=s-n*x;

        if(x<=a && y<=b){
        printf("YES\n");
        }

        else
        printf("NO\n");

    }

    return 0;
}
