#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        long long int sum=0;
        int board[n],s[m];

        for(int i=0;i<n;i++){
            cin>>board[i];
            sum+=board[i];
        }
        sort(board, board + n);

        for(int i=0;i<m;i++){
            cin>>s[i];
        }
        sort(s, s+m);

        int k=m-1;
        sum-=board[0];
        sum+=s[k];
        k--;

        for(int i=1;i<n;i++){
            if(board[i]<s[k]){
               sum-=board[i];
               sum+=s[k];
               if(k==0)
                break;
               k--;
            }
        }

        cout<<sum<<endl;

    }
    return 0;
}
