#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
       int n, max=0;
       scanf("%d",&n);
       char str[n+1];
       scanf("%s",str);

        for(int j=0;j<n;j++){
            if(str[j]-96>max)
                max=str[j]-96;
        }

        printf("%d\n",max);

    }
    return 0;
}
