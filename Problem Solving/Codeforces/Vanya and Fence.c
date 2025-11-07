#include<stdio.h>
int main ()
{
    int n, h, i,road_width=0;
    scanf("%d %d",&n,&h);
    int height[n];
    for(i=0;i<n;i++){
        scanf("%d",&height[i]);
        if(height[i]>h)
            road_width=road_width+2;
        else
            road_width=road_width+1;
    }
    printf("%d",road_width);


    return 0;
}
