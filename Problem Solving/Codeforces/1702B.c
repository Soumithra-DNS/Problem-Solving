#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[11],str1[11];
        scanf("%s",str);
        int size=strlen(str);
        if(str[0]=='1' && size>1){
             for(int i=1;i<size;i++){
                str1[i-1]=str[i];
             }
             str1[size-1]='\0';
            }
        else{
        for(int i=0;i<size;i++){

            if(i==0){
                str1[i]=(str[i]-1);
            }
            else
                str1[i]=str[i];
        }
        str1[size]='\0';

            }
        printf("%s\n",str1);

    }

    return 0;
}
