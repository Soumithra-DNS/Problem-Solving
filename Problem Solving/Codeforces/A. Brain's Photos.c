#include<stdio.h>
int main()
{
    int n,m,z=0;
    char ch[5];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n*m;i++){
            scanf("%s",ch);
            if(ch[0]=='C' || ch[0]=='M' || ch[0]=='Y')
                z=1;
    }
    if(z==0)
        printf("#Black&White\n");
    else
        printf("#Color\n");

    return 0;
}
