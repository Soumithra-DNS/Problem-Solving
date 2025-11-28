#include<stdio.h>
int main()
{
  int num,i,j,z,N,sum;
  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&num);

    for(z=1;z<=num;z++){
        for(j=num;j>z;j--){
            if(j*z==num){
            sum=sum+j+z;
            }
        }
    }

    sum=sum-num;

    if(sum==num)
        printf("%d eh perfeito\n",num);
    else
        printf("%d nao eh perfeito\n",num);
    sum=0;

}
return 0;
}
