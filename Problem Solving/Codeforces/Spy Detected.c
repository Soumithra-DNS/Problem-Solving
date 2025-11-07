#include<stdio.h>
int main()
{
   int i,j,t,n,pos1,pos2,count1=0,count2=0;
   scanf("%d",&t);
   for(i=0;i<t;i++){
    scanf("%d",&n);
    int array[n];
    for(j=0;j<n;j++){
        scanf("%d",&array[j]);
    }


    for(j=0;j<n;j++)
    {
        if(array[0]==array[j]){
            pos1=j+1;
            count1++;
        }
        else{
            pos2=j+1;
            count2++;
        }
    }

    if(count1<count2)
        printf("%d\n",pos1);
    else{
        printf("%d\n",pos2);
    }

    count1=0;
    count2=0;
   }


    return 0;
}

