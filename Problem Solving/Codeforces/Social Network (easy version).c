#include<stdio.h>
int main()
{
  int n, k, i=0, j=0, l=0, counts=0,count=0;
  scanf("%d %d",&n,&k);

  int id[n],show[k];

  for(i=0;i<n;i++)
    scanf("%d",&id[i]);

    show[0]=id[0];
    counts++;
  for(i=1;i<n;i++){
        for(l=counts-1;l>=0;l--){
            if(id[i]==show[l])
                count++;
        }

        if(count==0){
           for(l=counts-1;l>=0;l--){
            show[l+1]=show[l];
            if(l==0){
                show[0]=id[i];
                if(counts<k)
                    counts++;
            }
           }
        }
        count=0;

 }
 printf("%d\n",counts);
 for(i=0;i<counts;i++){
    printf("%d ",show[i]);
 }



  return 0;
}
