#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(str[i]==48)
            zero++;
        else
            one++;
    }
    int min;
    if(one <zero)
        min=one;
    else
        min=zero;
    printf("%d\n",n-(min*2));

    return 0;
}
