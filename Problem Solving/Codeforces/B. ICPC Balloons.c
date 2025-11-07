#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
      int n;
      scanf("%d",&n);
      char str[n+2];
      scanf("%s",str);
      int count[26];
       for(int i=0;i<26;i++)
         count[i]=0;

       for(int i=0;i<n;i++){
        int z=str[i]-65;
        if(count[z]>0)
            count[z]++;
        else
            count[z]+=2;
       }
       int sum=0;
       for(int i=0;i<26;i++)
         sum+=count[i];

        printf("%d\n",sum);
    }
    return 0;
}
