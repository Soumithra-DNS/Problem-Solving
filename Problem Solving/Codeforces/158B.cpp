#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}

void solve()
{

    int n; cin >> n;
    int arr[n];
    for(int i=0; i< n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int count = 0;
    for(int i=n-1,j=0; i>=j; i--)
    {
        int total = arr[i]+arr[j];
        if(total <= 4)
        {
            count++;
            if(total == 4)
                j++;
            else{
                while(total<=4)
                {
                    j++;
                    total+=arr[j];
                }
            }
        }
        else
        count++;
    }

    cout<< count<<endl;
    
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}

