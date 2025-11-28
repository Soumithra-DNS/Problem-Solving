#include<stdio.h>
int main()
{
    int i,j,m,z,k=0,n;
    char str[109],a[28];

    for(i=1;i<=26;i++)
        a[i]=96+i;

   scanf("%s",str);
   m=1;
   for(j=0;str[j]!='\0';j++){
        n=0;
    do{
            n=n+1;
            if(a[n]==str[j]){
                    if(n>m)
                        z=n-m;
                    else
                        z=m-n;

                    if(z<=13)
                        z=z;
                    else
                        z=26-z;

                    k=k+z;
                    m=n;

            }
    }while(a[n]!=str[j]);

   }
   printf("%d\n",k);
return 0;
}
