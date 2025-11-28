#include<stdio.h>
int main()
{
    int M[4][4],array[20],i,j,k,x,y,z,count=0,a,b;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&M[i][j]);
        }
    }

    for(i=0;i<20;i++){
        array[i]=9;
    }

    scanf("%d %d",&x,&y);

    array[0] = x;
    array[1] = y;

    a=x;
    b=y;

    z=2;
    j=2;

    for(k=x-1;count<j;k=k+2){

        if(M[k][y]==M[a][b]){
           for(i=0;array[i]!=9;i=i+2){
               if(array[i]!=k || array[i+1]!=y){
                 array[j]=k;
                 array[j+1]=y;
                 j=j+2;
               }
         }
        }

        if(M[y][k]==M[a][b]){
            for(i=0;array[i]!=9;i=i+2){
               if(array[i]!=y || array[i+1]!=k){
                 array[j]=y;
                 array[j+1]=k;
                 j=j+2;
               }
         }

        }
        x=array[z];
        y=array[z+1];
        z=z+2;
        count++;


    }
    for(j=0;j<20;j++){
        printf("%d",array[j]);
    }


    return 0;
}
