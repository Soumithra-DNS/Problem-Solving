#include<stdio.h>
int main()
{
    long long int t, i,array[8];
    scanf("%lld",&t);
    for(i=0;i<t;i++){
      long long int w,h;
       scanf("%lld %lld",&w,&h);
//x1
      long long int n1,max_x;
       scanf("%lld",&n1);
       long long int array1[n1],max,min;

       for(int j=0;j<n1;j++){
        scanf("%lld",&array1[j]);
       }

       max_x=array1[n1-1]-array1[0];

//x2
      long long int n2;
       scanf("%lld",&n2);
       long long int array2[n2];
       for(int j=0;j<n2;j++){
        scanf("%lld",&array2[j]);
       }

       if(max_x<array2[n2-1]-array2[0])
         max_x=array2[n2-1]-array2[0];

//y1
     long long int n3,max_y;
       scanf("%lld",&n3);
      long long int array3[n3];

       for(int j=0;j<n3;j++){
        scanf("%lld",&array3[j]);
       }

       max_y=array3[n3-1]-array3[0];

//y2
      long long int n4;
       scanf("%lld",&n4);
      long long int array4[n4];

       for(int j=0;j<n4;j++){
        scanf("%lld",&array4[j]);
       }

       if(max_y<array4[n4-1]-array4[0])
         max_y=array4[n4-1]-array4[0];

//area
    if(max_x*h>max_y*w)
      printf("%lld\n",max_x*h);
    else
      printf("%lld\n",max_y*w);

    }

    return 0;
}
