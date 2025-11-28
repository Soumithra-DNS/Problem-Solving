#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter r1,c1,r2,c2 : ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! Again enter r1,c1,r2,c2 : ");
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    }
    int A[r1][c1],B[r2][c2],C[r1][c2],i,j,k,sum=0;



    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);

        }
    }
    printf("\n\n");

    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
               sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
    printf("\n\n");
    printf("C:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d   ",C[i][j]);
        }
       printf("\n");

    }


    return 0;
}
