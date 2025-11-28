#include<stdio.h>
int main()
{
   char numbers[110];
   int i,j,count=0;

    scanf("%s",numbers);
    for(i=0;numbers[i]!='\0';i++){
        if(numbers[i]-48==4 || numbers[i]-48==7)
            count++;

    }

    if(count==4 || count==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
