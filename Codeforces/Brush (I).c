//Brush
#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
       int n;
       scanf("%d",&n);
       int arr[n],sum=0;

       for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
        if(arr[j]>0){
            sum+=arr[j];
        }
       }

       printf("Case %d: %d\n",i,sum);
       sum=0;
    }
    return 0;
}
