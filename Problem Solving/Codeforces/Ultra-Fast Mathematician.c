#include<stdio.h>
int main()
{
  char first[105],second[105];
  int i,j,count=0,third[105];
  scanf("%s",first);
  scanf("%s",second);

  for(j=0;first[j]!='\0';j++){
    if(first[j]-48==1){
        count++;
    }
    if(first[j]-48==0){
        count++;
    }
  }
  for(i=0;i<count;i++){
    if((first[i]-48) + (second[i]-48)==1){
        third[i]=1;
    }
    else
        third[i]=0;

  }

  for(i=0;i<count;i++){
    printf("%d",third[i]);
  }

  return 0;
}
