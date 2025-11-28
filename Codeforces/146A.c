#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    if(n%2==1)
        printf("NO\n");
    else{
        int z=0,t=n/2,sum1=0,sum2=0;
       for(int i=0;i<n;i++){
            if(i<t)
            sum1+=(str[i]-48);
            else
            sum2+=(str[i]-48);

            if(str[i]=='4' || str[i]=='7'){}
            else{
                z=1;
                printf("NO\n");
                break;
            }
       }
    if(z==0){
        if(sum1==sum2)
           printf("YES\n");
        else
           printf("NO\n");

    }
    }
    return 0;
}

