/*#include<stdio.h>
int main()
{
    long long int t, i, j, n, k, b, s;
    scanf("%lld",&t);

    for(i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&n,&k,&b,&s);
        long long int array[n],temp;

        if(k*b<=s){
            for(j=n-1;j>=0;j--){
                if(j==n-1){
                    temp=k*(b+1)-1;

                    if(temp>=s){
                        if(s/k<=b){
                            array[j]=s;
                            s=0;
                        }
                        else
                            break;
                    }
                    else{
                        array[j]=temp;
                        s=s-temp;
                    }
                }
                else{
                    if(s>=k){
                        array[j]=k-1;
                        s=s-(k-1);
                    }
                    else{
                        array[j]=s;
                        s=0;
                    }
                }
            }

            if(s==0){
                for(j=0;j<n;j++){
                    printf("%lld ",array[j]);
                }
                printf("\n");
            }
            else
                printf("-1\n");
        }
        else
            printf("-1\n");

    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int t, i, n, x, y;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n>10){
            x=n-10;
            y=10;
        }
        else{
            x=0;
            y=n;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}

