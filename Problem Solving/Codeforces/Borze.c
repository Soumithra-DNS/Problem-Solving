#include<stdio.h>
int main()
{
    int i, k, j=0;
    char str1[100],str2[100];
    scanf("%s",str1);

    for(i=0;str1[i]!='\0';i++){
        if(str1[i]=='-' && str1[i+1]=='-'){
           str2[j]='2';
           j++;
           i=i+1;
        }

        else if(str1[i]=='-' && str1[i+1]=='.'){
                str2[j]='1';
                j++;
                i=i+1;
        }
        else if(str1[i]=='.'){
                str2[j]='0';
                j++;

        }
    }
    str2[j]='\0';


    for(k=0;str2[k]!='\0';k++){
        printf("%c",str2[k]);
    }


    return 0;
}
