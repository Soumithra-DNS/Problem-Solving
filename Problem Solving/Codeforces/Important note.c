#include<stdio.h>
int main()
{
    int n, m, max = 0, sum = 0, k = 0;
    scanf("%d%d",&n,&m);
    int b[n];
    char a[n][m+1];
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<m;i++)
        scanf("%d",b+i);
    for(int i=0;i<m;i++){
        int c[5]={};
        for(int j=0;j<n;j++){
            c[a[j][i]-'A']++;
            if(max<c[a[j][i]-'A'])
                max=c[a[j][i]-'A'];
        }
        sum+=(b[k++]*max);
        max=0;
    }
    printf("%d",sum);
}
