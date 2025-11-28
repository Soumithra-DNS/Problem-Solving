#include<stdio.h>
int main()
{
    int a[3],i,j,z=0,x=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a[0],&a[1]);
        z=z+a[1]-a[0];
        if(z>x)
            x=z;
    }
    printf("%d",x);

    return 0;
}
