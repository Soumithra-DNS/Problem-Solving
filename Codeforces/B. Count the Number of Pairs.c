#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    while(t--){
        int n, k;
        scanf("%d %d",&n,&k);
        char str[n+2];
        scanf("%s",str);

        for(int i=0;i<n;i++){
            if(str[i]!=48){
            for(int j=i+1;j<n;j++){
                if(str[j]!=48){

                if(str[i]<91){
                if(k>0){
                    if(((str[i]+32)==str[j]) || (str[i]==str[j])){
                        count++;
                        if(str[i]==str[j])
                            k--;

                        str[j]=48;
                        break;
                    }

                    }
                    else{
                        if((str[i]+32)==str[j]){
                            count++;
                            str[j]=48;
                            break;
                        }
                    }

                    }


                    else {
                        if(k>0){
                   if(((str[i]-32)==str[j]) || (str[i]==str[j])){
                        count++;
                        if(str[i]==str[j])
                            k--;

                        str[j]=48;
                        break;
                    }

                    }
                    else{
                        if((str[i]-32)==str[j]){
                            count++;
                            str[j]=48;
                            break;
                        }
                    }

                    }

                    }

            }
        }
        }

        printf("%d\n",count);
        count=0;

    }
    return 0;
}
