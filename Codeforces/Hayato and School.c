#include<stdio.h>
int main()
{
    int i,j,k,l,t,n,sum=0,a,b,c,x;
    scanf("%d",&t);

    for(i=0;i<t;i++){
       scanf("%d",&n);
       int array[n];

       for(j=0;j<n;j++){
        scanf("%d",&array[j]);
       }
        x=0;
        for(j=0;j<n-2;j++){
            for(k=j+1;k<n-1;k++){
                for(l=k+1;l<n;l++){
                   sum=array[j]+array[k]+array[l];
                   if(sum%2==1){
                    x=sum;
                    a=j+1;
                    b=k+1;
                    c=l+1;


                   }

                }
            }
        }

        if(x%2==1){
          printf("YES\n");
          printf("%d %d %d\n",a,b,c);
        }
        else
            printf("NO\n");

    }
    return 0;
}
