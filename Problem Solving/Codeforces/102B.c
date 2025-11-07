#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    scanf("%s",str);
    int n;
    n=strlen(str);
    if(n==1)
        printf("0\n");
    else{
        int sum=0;
       for(int i=0;i<n;i++){
            sum=sum+(str[i]-48);
        }
        int p=sum,r=0,count=0,q=sum;
        while(p>9)
        {
        q=p;
        r=0;
            while(q>0)
            {
                r=r+q%10;
                q=q/10;
            }
            count++;
            p=r;
        }
        printf("%d\n",count+1);

    }

    return 0;
}
