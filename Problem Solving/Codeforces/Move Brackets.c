#include<stdio.h>
int main()
{
    int i, j, k, n, t, x=0, y=0, z, count=0, count1=0, count2=0;
    scanf("%d",&t);
    char str[55];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%s",str);

        for(j=0;j<n;j++){
            if(str[j]=='('){
                k=j;

                while(str[k]=='(')
                {
                    count1++;
                    k++;
                }

                while(str[k]==')')
                {
                    count2++;
                    k++;
                }

                if(count1>count2){
                   count+=count2;
                   x=x+count1-count2;
                }
                else
                {
                    count+=count1;
                    y=y+count2-count1;
                    if(y>x)
                        y=x;
                }

                j=j+count1;

                count1=count2=0;


            }
            if(x<y)
                z=x;
            else
                z=y;
        }

        printf("%d\n",((n/2)-count-z));

        count=0;
        x=0;
        y=0;
    }


    return 0;
}
