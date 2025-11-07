#include<stdio.h>
int main()
{
    int t, i, j, n, A=0, B=0, total=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){

        scanf("%d",&n);
        A=A+1;
        total=1;
        j=2;
        while(total!=n)
        {

            if(j%4==0){
                total=total+j+j+1;
                if(total>n){
                    total=total-j-j-1;
                    A=A+n-total;
                    total=n;
                    j=j+2;
                }
                else
                    A=A+j+j+1;
                    j=j+2;

            }

            else
            {
              total=total+j+j+1;
                if(total>n){
                    total=total-j-j-1;
                    B=B+n-total;
                    total=n;
                    j=j+2;
                }
                else
                    B=B+j+j+1;
                    j=j+2;


            }
        }
        printf("%d %d\n",A,B);

        A=0;
        B=0;
        total=0;


    }

    return 0;
}
