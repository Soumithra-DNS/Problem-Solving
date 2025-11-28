#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101],str[101];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str);

    int a[26]={},b[26]={};

    for(int i=0;str1[i]!='\0';i++)
        a[str1[i]-'A']++;
    for(int i=0;str2[i]!='\0';i++)
        a[str2[i]-'A']++;
    for(int i=0;str[i]!='\0';i++)
        b[str[i]-'A']++;

    int z=0;
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            z=1;
            break;
        }
    }
    if(z==0)
        printf("Yes\n");
    else
        printf("NO\n");


    return 0;
}
