#include<stdio.h>
int main()
{
    int t, i, n, r, b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&r,&b);
        char win[n+1];
        int k=0;
        while(r>0){
            int z=r/(b+1);
            for(int j=0;j<z;j++){
                win[k]='R';
                k++;
            }

            if(b>0){
                win[k]='B';
                k++;
            }

            r=r-z;
            b=b-1;
        }
        win[n]='\0';
        printf("%s\n",win);
    }
    return 0;
}
