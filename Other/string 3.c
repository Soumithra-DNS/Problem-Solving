#include<stdio.h>
int main()
{
    char str[100];
    int sl[26],cl[26],i;
    scanf("%[^\n]s",str);
    for(i=0;i<26;i++){
        sl[i]=0;
        cl[i]=0;
    }

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
            sl[str[i]-97]++;
        else if(str[i]>='A' && str[i]<='Z')
            cl[str[i]-65]++;
    }
    for(i=0;i<26;i++){
        if(sl[i]>0)
        printf("Number of %c is %d\n",i+97,sl[i]);
    }

    for(i=0;i<=26;i++){
        if(cl[i]>0)
            printf("Number of %c is %d\n",i+65,cl[i]);

    }


return 0;
}
