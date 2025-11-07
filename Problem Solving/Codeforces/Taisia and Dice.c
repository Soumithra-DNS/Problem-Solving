#include<stdio.h>
int main()
{
    int i, j, k, t, n, n1, s, r;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&s,&r);
        int array[n];
        array[0]=s-r;
        n1=n-1;
        for(j=1;j<n;j++){
          array[j]=r/n1;
          r=r-array[j];
          n1=n1-1;
        }
        for(k=0;k<n;k++){
            printf("%d ",array[k]);
        }
        printf("\n");


    }



    return 0;
}
