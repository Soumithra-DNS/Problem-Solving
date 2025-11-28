#include<stdio.h>
int main()
{
    int n,time,i,j;
    char str[n+1];
    scanf("%d %d",&n,&time);
    scanf("%s",str);
    for(i=0;i<time;i++){
        for(j=0;j<n;j++){
            if(str[j]=='B' && str[j+1]=='G'){
            str[j]='G';
            str[j+1]='B';
            j++;
            }
        }
    }
    printf("%s",str);

    return 0;
}
