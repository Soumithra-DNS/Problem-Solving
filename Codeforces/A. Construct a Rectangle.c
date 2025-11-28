
#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    for(int z = 0; z < k; z++){
    int a, b, c, count = 0;
    scanf("%d %d %d",&a, &b, &c);
    if((a+b == c) || (c+b == a) || (a+c == b))
        printf("YES\n");
    else{
        if(a&1) count++;
        if(b&1) count++;
        if(c&1) count++;
        if(count == 0 || count == 2){
            if((a == b) || (b == c) || (c == a))
                printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    }
}
