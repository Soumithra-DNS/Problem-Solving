
#include<stdio.h>
int main()
{
    int t, i, j, k=0,n, h, A=0, B=0, total=0, countAb=0, countAw=0, countBb=0,countBw=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){

        scanf("%d",&n);
        countAw++;
        k++;
        total=1;
        j=2;
        while(total!=n)
        {

            if(j%4==0){
                total=total+j+j+1;

                if(total>n){
                    h=k+j+j+1-(total-n);
                    for(k=k;k<h;k++){
                        if(k%2==0)
                            countAb++;
                        else
                            countAw++;
                    }
                    total=n;
                }

                else{
                    h=k+j+j+1;
                    for(k=k;k<h;k++){
                        if(k%2==0)
                            countAb++;
                        else
                            countAw++;
                    }

                    j=j+2;

            }

            }

            else
            {
              total=total+j+j+1;
                if(total>n){
                    h=k+j+j+1-(total-n);
                    for(k=k;k<h;k++){
                        if(k%2==0)
                            countBb++;
                        else
                            countBw++;
                    }
                    total=n;
                }
                else{
                   h=k+j+j+1;
                   for(k=k;k<h;k++){
                        if(k%2==0)
                            countBb++;
                        else
                            countBw++;
                    }
                    j=j+2;

            }
        }

        }

        printf("%d %d %d %d\n",countAw,countAb,countBb,countBw);

        countAb=0;
        countAw=0;
        countBb=0;
        countBw=0;
        total=0;
        k=0;


    }

    return 0;
}
