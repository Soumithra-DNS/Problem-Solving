#include<stdio.h>
int main()
{
    int t, i, j, r, b, d, x, y, m, z;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        z=0;
        scanf("%d %d %d",&r,&b,&d);
        if(r>b){
            x=r;
            y=b;
        }
        else{
          x=b;
          y=r;
        }

        for(j=y;j>0;j--){
            m=x/j;
            x=x-m;
            if(m-1>d){
                z=5;
                break;
            }
        }


       if(z==5)
            printf("NO\n");
        else
            printf("YES\n");

    }

    return 0;
}

/*

do{
            m=x/y;
            x=x-m;
            y--;
            if(m-1>d){
                z=5;
                break;
            }
        }while(y>0);

*/
