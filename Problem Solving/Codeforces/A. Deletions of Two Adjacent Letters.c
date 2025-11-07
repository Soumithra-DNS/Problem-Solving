#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[51],ch;
        scanf("%s %c",str,&ch);
        int size=strlen(str);
        int z=0;

        for(int i=0;i<size;i++){
            if(str[i]==ch){
                if(i%2==0 && (size-1-i)%2==0){
                    z=1;
                    break;
                }
            }
        }
        if(z==1)
           printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
