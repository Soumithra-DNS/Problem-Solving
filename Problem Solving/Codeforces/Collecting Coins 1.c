#include<stdio.h>
    int main()
    {
        int n,t,sum,m,avg;
        scanf("%d",&t);

        for(int i=0;i<t;i++)
        {
            int a,b,c,d;
            scanf("%d %d %d %d",&a,&b,&c,&n);

            int sum=a+b+c+n;

            if(sum%3==0)
            {
                int avg=(float)sum/3;
                if(avg>=a&&avg>=b&&avg>=c)
                    printf("YES\n");
                else
                    printf("NO\n");

            }
            else
                printf("NO\n");
        }
    }
