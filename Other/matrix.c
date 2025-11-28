#include<stdio.h>
int main()
{
   int a[3][3],i,j,sum=0,x,y;
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
   }
    for(i=0;i<3;i++){
        x=a[0][i];
        y=x;
        for(j=0;j<3;j++){
            if(a[j][i]>x)
                y=a[j][i];
        }
        printf(" col %d highest number %d\n",i,y);
    }


    return 0;
}
