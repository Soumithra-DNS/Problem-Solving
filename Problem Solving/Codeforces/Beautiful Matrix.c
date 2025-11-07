#include<stdio.h>
int main()
{
    int M[5][5],i,j,x,y,moves=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&M[i][j]);
            if(M[i][j]==1){
                x=i;
                y=j;
            }
        }
        printf("\n");
    }
    if(x<=2)
        moves=moves+(2-x);
    else if(x>2)
        moves=moves+(x-2);

    if(y<=2)
        moves=moves+(2-y);
    else if(y>2)
        moves=moves+(y-2);

        printf("%d",moves);
    return 0;
}
