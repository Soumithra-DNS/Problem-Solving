#include<stdio.h>

int main()
{
    int i,j,t,z=0;

    char ch[2];
    char string[15]="codeforces";

    scanf("%d",&t);

    for(i=0;i<t;i++){

        scanf("%s",ch);

        for(j=0;string[j]!='\0';j++){
            if(ch[0]==string[j]){
                z=5;
                break;
            }
        }

        if(z==5)
            printf("YES\n");
        else
            printf("NO\n");

        z=0;



    }

    return 0;
}
