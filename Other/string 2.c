#include<stdio.h>

int main()
{
    char str[100];
    int i,small_letter[26],capital_letter[26];
    scanf("%[^\n]s",str);

    for(i=0;i<26;i++){
        small_letter[i]=0;
        capital_letter[i]=0;
    }

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
                small_letter[str[i]-97]++;

        else if(str[i]>='A' && str[i]<='Z')
            capital_letter[str[i]-65]++;
    }

    for(i=0;i<26;i++){
        if(small_letter[i]>0)
            printf("Number of %c is %d\n",i+97,small_letter[i]);
    }

    for(i=0;i<26;i++){
        if(capital_letter[i]>0)
            printf("Number of %c is %d\n",i+65,capital_letter[i]);
    }


return 0;
}
