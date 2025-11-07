#include<stdio.h>
int main()
{
    int T,i,j,size;
    scanf("%d",&T);
    for(j=0;j<T;j++){
        scanf("%d",&size);

        int a[size],j,a_max=0,a_min=0;
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
            if(a[i]>a_max)
                a_max=a[i];
        }
        a_min=a_max;
        for(i=0;i<size;i++){
            if(a[i]<a_min)
            a_min=a[i];
        }
        printf("%d\n",a_max-a_min);

    }
    return 0;
}
