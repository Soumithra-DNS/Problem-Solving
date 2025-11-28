#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n=s.size();
        int arr[26]={};

        for(int i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }
        int x=0,y=0,z=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]%2==0 && arr[i]!=0)
                x++;
            else if(arr[i]==1)
                y++;
            else if(arr[i]%2==1)
            {
                x++;
                y++;
            }
        }
        if(x>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
