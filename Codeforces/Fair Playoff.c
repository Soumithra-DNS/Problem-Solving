#include<stdio.h>
int main()
{
    int a[5], second_max=0, sum=0,z, j, i, t, max=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[j]);
            }
        for(j=0;j<4;j++){
            if(a[j]>max){
                max=a[j];
                z=j;
            }
        }
        for(j=0;j<4;j++){
            if(j!=z){
                if(a[j]>second_max)
                    second_max=a[j];
             }
          }
        for(j=0;j<4;j++){
            if(a[j]== max){
                sum=sum+j;
            }
            if(a[j]==second_max){
                sum=sum+j;
            }
        }
        if(sum==1)
            printf("NO\n");
        else if(sum==5)
            printf("NO\n");
        else
            printf("YES\n");
    sum=0;
    max=0;
    second_max=0;
    }
    return 0;
}
