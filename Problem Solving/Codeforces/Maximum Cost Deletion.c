#include<stdio.h>
int main()
{
   int t, i;
   scanf("%d",&t);
   for(i=0;i<t;i++){

       int n, a, b,count1=0,count0=0,max_cost=0;
       scanf("%d %d %d",&n,&a,&b);

       char str[n+5];
       scanf("%s",str);

       if(b<=0){

        int l=0;

        for(int j=0;j<n;j++){

            if(str[j]==48){
                for(int k=j;str[k]==48;k++){
                    l++;
                }
                count0++;
                j=j+l;
                l=0;
            }
         }

         for(int j=0;j<n;j++){

            if(str[j]==49){
                for(int k=j;str[k]==49;k++){
                    l++;
                }
                count1++;
                j=j+l;
                l=0;
            }
         }
         if(count0<count1)
            max_cost=max_cost+a*n+b*(count0+1);
         else
            max_cost=max_cost+a*n+b*(count1+1);

        }
        else
            max_cost=n*(a+b);


        printf("%d\n",max_cost);


   }
    return 0;
}
