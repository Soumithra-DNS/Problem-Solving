#include<stdio.h>
int main()
{
    int i,j,z,t,count=0;
    char a[101];
    scanf("%d",&t);

    for(j=0;j<t;j++){
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
            count++;

        if(count==2)
            printf("%s",a);

        else if(count>2){
             printf("%c%c",a[0],a[1]);
            for(z=3;z<count;z=z+2){
                printf("%c",a[z]);
            }
        }
        count=0;
        printf("\n");
    }
    return 0;
}
