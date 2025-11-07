#include<stdio.h>
int main()
{
    int a,b,c,z,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);

        if(b<c){
           z=(c-b)+(c-1);
           if((a-1)==z)
                printf("3\n");
           else if(a-1<z)
                printf("1\n");
           else
                printf("2\n");
        }

        if(b>c){
           z=b-1;
           if(a-1==z)
              printf("3\n");
           else if(a-1<z)
                printf("1\n");
           else
                printf("2\n");
        }

    }
    return 0;
}
