#include<stdio.h>
int main()
{
    int t, i, j, n, x, y,z, num1, num2,sum1=0,sum2=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("%d %d\n",n/2,n/2);
        }
        else{
            int f=n%10;
            if(f==9){
                int temp=n;
                temp=temp/10;
                int s=temp%10;
                if(s%2==0){
                    printf("%d %d\n",n/2,(n/2)+1);
                }
                else{
                    num1=n;
                    num2=0;
                    z=n/2+1;
                    for(j=1;j<=z;j++){
                        x=num1;
                        y=num2;
                        sum1=0;
                        while(x!=0){
                            sum1+=x%10;
                            x=x/10;
                        }
                        sum2=0;
                        while(y!=0){
                            sum2+=y%10;
                            y=y/10;
                        }
                        if(sum1==sum2 || sum1-sum2==1 || sum2-sum1==1){
                            printf("%d %d\n",num1,num2);
                            break;
                        }
                        num1--;
                        num2++;

                    }

                }
        }
        else
          printf("%d %d\n",n/2,(n/2)+1);



        }

    }
    return 0;
}
