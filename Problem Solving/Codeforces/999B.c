#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1],str1[n+1];
    scanf("%s",str);
    for(int i=2;i<=n;i++){
        if(n%i==0){
           for(int j=0;j<i/2;j++){
            int temp=str[j];
            str[j]=str[i-1-j];
            str[i-1-j]=temp;
           }
        }

    }
    printf("%s",str);

    return 0;
}
