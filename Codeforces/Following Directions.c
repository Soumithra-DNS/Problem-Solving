#include<stdio.h>
int main()
{
    int t, i, j,x=0, y=0,z;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        char str[n+2];
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++){
            if(str[j]=='U')
                y++;
            else if(str[j]=='D')
                y--;
            else if(str[j]=='R')
                x++;
            else if(str[j]=='L')
                x--;

            if(x==1 && y==1){
                z=1;
                break;
            }
        }
        if(z==1)
            printf("YES\n");
        else
            printf("NO\n");

        x=0;
        y=0;
        z=0;


    }

    return 0;
}
