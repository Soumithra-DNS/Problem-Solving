#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int s,j=9,k=9,z;
        scanf("%d",&s);
        char str[11];

        while(s>0){
           if(s>9){
            z=48+j;
            s=s-j;
            str[k]=z;
            j--;
            k--;
           }

           else{
               if(s>j){
                z=48+j;
                s=s-j;
                str[k]=z;
                k--;
                j--;
               }
               else{
                z=48+s;
                s=s-s;
                str[k]=z;
               }

           }
        }

        for(k=k;k<10;k++)
            printf("%c",str[k]);

        printf("\n");

    }
    return 0;
}
