#include<bits/stdc++.h>
using namespace std;
void fun()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int x=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            x++;
    }
    cout<< (n-x+k)/k << endl;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
       fun();
   }
   return 0;
}
