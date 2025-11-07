#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<10)
            cout << n << endl;
        else if(n>45)
            cout << "-1" << endl;
        else{
            int num=0,x=1;
            for(int j=9;j>0;j--){
                if(n>=j){
                   num+=x*j;
                   x=x*10;
                   n-=j;
                }
            }
            cout << num << endl;
        }
    }

    return 0;
}
/*
        int n,j,k,temp,b[15];
        scanf("%d",&n);
        if(n>45)
            printf("-1\n");
        else if(n<10)
            printf("%d\n",n);
        else
        {
            for(j=9;j>0;j--)
            {
               if(n>=j)
               {
                   b[j]=j;
                   n=n-j;
               }
               else
                b[j]=0;
            }
            for(j=1;j<=9;j++)
            {
                if(b[j]>0)
                    printf("%d",b[j]);
            }
            printf("\n");
        }
    }
}*/
