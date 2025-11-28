
#include<stdio.h>
int main()
{
    int T,i,j,size;
    scanf("%d",&T);
    for(j=0;j<T;j++){

        scanf("%d",&size);

        int a[size],a_max=0,z=0,count=0;
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
            if(a[i]>a_max)
                a_max=a[i];
        }
        do
        {
            z=0;
        for(i=0;i<size;i++)
            {
            if(a[i]<a_max)
                a[i]=a[i]+1;
            else if(a[i]==a_max)
                {
                z++;
                if(z==size)
                printf("%d",count);
                }
            }
        count++;
        } while(z<size);

    }
    return 0;

}

