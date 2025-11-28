#include<stdio.h>
int main()
{
    int i,j,n,k,t,z,m,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n+10];

        for(k=0;k<n;k++){
            scanf("%d",&a[k]);
        }
         for(j=1;j<n;j++){
            for(m=j;m<n;m++){
                if(a[j]>a[m]){
                    temp=a[j];
                    a[j]=a[m];
                    a[m]=temp;
                }
            }
        }



        for(z=1;z<n;z++){
            if(a[0]<a[z]){
                while(a[0]<a[z])
                {
                 a[z]=a[z]-1;
                 a[0]=a[0]+1;
                }
            }
        }

    printf("%d\n",a[0]);
    }


    return 0;
}
