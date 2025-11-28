#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter r1,c1 : ");
    scanf("%d %d",&r1,&c1);

    int A[r1][c1],B[c1][r1],i,j;

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
            B[j][i]=A[i][j];
        }
    }
    printf("\n\n");
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
            printf("%d   ",B[i][j]);
        }
       printf("\n");

    }

    return 0;
}
