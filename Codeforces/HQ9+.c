#include<stdio.h>
int main()
{
    int z=0;
    char str[110];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if (str[i]=='H'||str[i]=='Q'||str[i]=='9')
            z=5;
    }
    if(z==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
