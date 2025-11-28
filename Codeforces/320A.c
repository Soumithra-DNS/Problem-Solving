#include<stdio.h>
int main()
{
    char str[11];
    scanf("%s",str);
    int z=0;
    for(int i=0;str[i]!='\0';i++){
       if(str[i]=='1'){
        if(str[i+1]=='1' || str[i+1]=='4'){
          if(str[i+1]=='4'){
            if(str[i+2]=='4'){
                i+=2;
            }
            else
                i++;
          }

       }

       }
       else{
        z=1;
        break;
       }
    }
    if(z==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
