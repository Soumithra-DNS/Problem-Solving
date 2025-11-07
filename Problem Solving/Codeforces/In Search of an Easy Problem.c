#include<stdio.h>
int main()
{
    int i, n, count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]==1)
            count++;
    }
    if(count==0)
        printf("EASY");
    else
        printf("HARD");
    return 0;
}
