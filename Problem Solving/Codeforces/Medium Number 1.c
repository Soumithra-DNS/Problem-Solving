#include<stdio.h>
int main()
{
    int a[5],i,j,temp,z,t;
    scanf("%d",&t);
    for(z=0;z<t;z++){
        for(i=0;i<3;i++)
            scanf("%d",&a[i]);

        for(j=0;j<3;j++){
            for(i=j;i<3;i++){
                if(a[j]>a[i]){
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }


        printf("%d\n",a[1]);

    }

    return 0;
}
