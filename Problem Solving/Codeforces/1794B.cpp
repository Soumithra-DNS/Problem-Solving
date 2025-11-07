/////IN THE NAME OF ALLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n-1);
        vector<int>v2(n);
        for(int i=0;i<n-1;i++) cin>>v[i];
        v2.back()=v.back();
        v2.front()=v.front();
        for(int i=1;i<n-1;i++){
            v2[i]=min(v[i],v[i-1]);
        }
        for(auto u:v2) cout<<u<<" ";
        cout<<endl;
    }
return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==1){
                arr[i]++;
            }
            if(i>0){
            if(arr[i]%arr[i-1]==0){
                arr[i]++;
            }
            }

        }
        for(int i=0;i<n;i++){
            cout << arr[i]<<" ";
        }
        cout << endl;


    }

    return 0;
}*/
