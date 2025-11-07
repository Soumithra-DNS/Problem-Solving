#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    for(int z = 0; z < k; z++){
    int n;
    scanf("%d",&n);
    if(n == 3)
        puts("NO");
    else{
        puts("YES");
        if(n%2 == 0){
            for(int i = 0; i < n; i++){
                if(i%2) printf("-1 ");
                else printf("1 ");
            }
            printf("\n");
        }
        else{
            int limit = n/2;
            for(int i = 0; i < n; i++){
                if(i%2 == 0) printf("%d ",(limit-1)*-1);
                else printf("%d ",limit);
            }
            printf("\n");
        }
    }
    }
}
