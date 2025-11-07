#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,count=0,z=0;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);

        for(int j=1;j<n;j=j+3){
            for(int k=j;k<=j+1;k++){
                if(str[k]==str[j])
                    count++;
            }
            if(count!=2){
                z=5;
                break;
            }
            count=0;

        }

        if(z==5)
            printf("NO\n");
        else
            printf("YES\n");

    }

    return 0;
}
