#include<stdio.h>
int main()
{
    int i, j, n, count=0;
    char coler[100];
    scanf("%d",&n);
    scanf("%s",coler);

    for(i=0;i<n;i++){
        if(coler[i]==coler[i+1]){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
