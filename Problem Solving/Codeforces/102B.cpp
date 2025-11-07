#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9];
    char str[]
    cin >> str;
    int x, y,count=0,p,q;
    while(n>9){
       p=n;
       q=0;
       while(p>0){
        q=q+p%10;
        p=p/10;
       }
       count++;
       n=q;
    }
    cout << count << endl;

    return 0;
}

/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,p,q,r,i,count=1,c9=0,c8=0,c7=0,c6=0,c5=0,c4=0,c3=0,c2=0,c1=0;
    char str[10000000];
    scanf("%s",str);
    n=strlen(str);
    if(n<2)
        printf("0");
    else
    {
        for(i=0; i<n; i++)
        {
            if(str[i]=='9')
                c9++;
            else if(str[i]=='8')
                c8++;
            else if(str[i]=='7')
                c7++;
            else if(str[i]=='6')
                c6++;
            else if(str[i]=='5')
                c5++;
            else if(str[i]=='4')
                c4++;
            else if(str[i]=='3')
                c3++;
            else if(str[i]=='2')
                c2++;
            else if(str[i]=='1')
                c1++;
        }
        q=p=c9*9+c8*8+c7*7+c6*6+c5*5+c4*4+c3*3+c2*2+c1;
         while(p>9)
        {
        q=p;
        r=0;
            while(q>0)
            {
                r=r+q%10;
                q=q/10;
            }
            count++;
            p=r;
        }
        printf("%d",count);

    }
    return 0;
}*/
