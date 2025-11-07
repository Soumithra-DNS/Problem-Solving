#include<stdio.h>
 int main()
 {
     int t,n,j,i,z;
     scanf("%d\n",&t);

     for(i=0;i<t;i++){
        scanf("%d",&n);
        char a[n],b[n-1];
        //scanf("%[^\n]s",a);
        for(j=0;j<n;j++){
            scanf("%c",&a[j]);
        }
        z=0;
        /*for(j=0;j<n-1;j++){

        if(  a[j]=='1' && a[j+1]=='1'){
          b[z]='-';
          z++;
          }
        else if(  a[j]=='1' && a[j+1]=='0'){
          b[z]='+';
          z++;
          }
        else if(  a[j]=='0' && a[j+1]=='1'){
          b[z]='+';
          z++;
          }
        else if(  a[j]=='0' && a[j+1]=='0'){
          b[z]='+';
          z++;
          }

         }*/
        for(j=0;j<n-1;j++)
            printf("%c",b[j]);

     }
 return 0;
 }
