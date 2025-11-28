#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str1[n+1],str2[n+1];
    scanf("%s %s",str1,str2);
    int sum=0,temp;
    for(int i=0;i<n;i++){
        int x=str1[i]-48;
        int y=str2[i]-48;
        if(x<y){
            temp=x;
            x=y;
            y=temp;
        }
        temp=x-y;
        if(temp>5)
            temp=10-temp;

        sum+=temp;
    }
    printf("%d",sum);


    return 0;
}
