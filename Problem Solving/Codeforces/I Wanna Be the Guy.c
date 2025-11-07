#include<stdio.h>
int main()
{
    int i, j, k, n, n1, n2, temp, count=0, count1=0;
    scanf("%d",&n);
    scanf("%d",&n1);
    int x[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&x[i]);
    }

    scanf("%d",&n2);
    int y[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&y[i]);
    }

    int z[n1+n2];
    for(i=0;i<n1;i++){
        z[i]=x[i];
    }
    for(i=n1;i<n1+n2;i++){
        z[i]=y[i-n1];
    }

    for(i=0;i<n1+n2;i++){
        for(j=i;j<n1+n2;j++){
            if(z[i]>z[j]){
             temp=z[i];
             z[i]=z[j];
             z[j]=temp;
            }
        }
    }

    for(i=1;i<n+1;i++){
        count=0;
        for(j=0;j<n1+n2;j++){
            if(z[j]==i){
                count++;
            }
        }
        if(count>0){
            count1++;
        }
    }

    if(count1==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");

    return 0;
}
