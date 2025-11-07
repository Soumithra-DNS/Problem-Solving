#include<stdio.h>
int main()
{
    int n,t,j,count0=0,count1=0,count2=0,opp=0;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++){
            scanf("%d",&array[i]);
            if(array[i]%3==0)
                count0++;
            else if(array[i]%3==1)
                count1++;
            else
                count2++;

        }
        int z=n/3;

        while(count0!=z || count1!=z || count2!=z){
            while(count0!=z){
                if(count0<z){
                    count2-=1;
                    count0+=1;
                    opp++;
                }
                else if(count0>z){
                    count1+=1;
                    count0-=1;
                    opp++;
                }
            }

            while(count1!=z){
                if(count1<z){
                    count0-=1;
                    count1+=1;
                    opp++;
                }
                else if(count1>z){
                    count2+=1;
                    count1-=1;
                    opp++;
                }
            }
        }

        printf("%d\n",opp);
        opp=0;
        count0=0;
        count1=0;
        count2=0;

    }

    return 0;
}
