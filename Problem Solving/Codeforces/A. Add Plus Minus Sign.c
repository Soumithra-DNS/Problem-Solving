#include<stdio.h>
int main()
{
    int i, t, j, n,sum=0;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        scanf("%d",&n);
        char binary[n+2];
        scanf("%s",binary);
        char sine[n+2];

        for(i=0;binary[i]!='\0';i++){
            if(i==0)
            sum+=(binary[0]-48);
            else{
                sum+=(binary[i]-48);
                if(sum>1){
                    sine[i-1]='-';
                    sum-=2;
                }
                else{
                    sine[i-1]='+';
                }

            }
        }
        sine[i-1]='\0';

        printf("%s",sine);
        printf("\n");
        sum=0;
    }
    return 0;

}
