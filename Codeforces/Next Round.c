#include<stdio.h>
int main()
{
    int n, k, i, j, count=0;
    scanf("%d %d",&n,&k);
    int score[n];
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    for(j=0;j<n;j++){
        if(score[k-1]>0){
            if(score[k-1]<=score[j])
                count++;
        }
        else{
        if(score[k-1]<score[j])
                count++;
        }

    }

    printf("%d",count);


    return 0;
}
