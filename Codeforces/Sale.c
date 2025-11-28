#include<stdio.h>
int main()
{
    int i, j, n1, n2, temp, sum=0, zero;
    scanf("%d %d",&n1,&n2);
    int price[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&price[i]);
    }

    for(i=0;i<n1;i++){
        for(j=i;j<n1;j++){
            if(price[i]>price[j]){
                temp=price[i];
                price[i]=price[j];
                price[j]=temp;
            }
        }
    }


    for(i=0;i<n2;i++){
        if(price[i]>0){
            sum=sum+0;
        }
        else
        sum=sum+price[i];
    }

    if(sum>0)
        printf("0");
    else
        printf("%d",-sum);

    return 0;
}
