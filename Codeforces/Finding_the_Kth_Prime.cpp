// #include <bits/stdc++.h>
// using namespace std;
// const int N = 10;
// const int N1 = 5e6 + 5;
// vector<long long> prime(N / 32 + 2);
// vector<long long> ans(N1);
// bool check(int x, int pos)
// {
//     cout << x << " " << pos << "\n";
//     return (bool)(x & (1 << pos));
// }

// int sett(int x, int pos)
// {
//     return x | (1 << pos);
// }

// void siv()
// {
//     int n = sqrt(N);
//     for (int i = 2; i <= N; i += 2)
//     {
//         status[i >> 5] = sett(status[i >> 5], i & 31);
//     }

//     for (int i = 3; i < n; i += 2)
//     {
//         if (!check(status[i >> 5], i & 31))
//         {
//             for (int j = i * i; j <= N; j += (i << 1))
//             {
//                 status[j >> 5] = sett(status[j >> 5], j & 31);
//             }
//         }
//     }
//     int k = 1;
//     for (int i = 1; i < N; i++)
//     {
//         if (check(status[i >> 5], i & 31) == 0)
//         {
//             ans[k] = i;
//             k++;
//         }
//     }
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     cout << ans[n] << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     siv();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;


// C++ program to implement bitwise Sieve 
// of Eratosthenes. 
// #include <bits/stdc++.h> 
// using namespace std;
// const int N = 5e6 + 5;
// vector<int>prime(N / 64, 0);
// //memset(prime, 0, sizeof(prime)); 
// vector<int>ans;

// bool ifnotPrime(int x) 
// { 
//     bool f = (prime[x/64] & (1 << ((x >> 1) & 31)));
//     //cout << f << " " ;
// 	return f;
// } 

// void makeComposite(int x) 
// { 
// 	prime[x/64] |= (1 << ((x >> 1) & 31));
//     return;
// } 

// void bitWiseSieve() 
// { 
// 	for (int i = 3; i * i <= N; i += 2) { 
// 		if (!ifnotPrime(i))
//         //cout << i << " ";
// 			for (int j = i * i, k = i << 1; j < N; j += k){
// 				makeComposite(j); 
//                 //cout << j << " ";
//             }
// 	}
//     ans.push_back(0);
//     ans.push_back(2);
// 	for (int i = 3; i <= N; i += 2){
// 		if (!ifnotPrime(i)){
//             //cout << i << " ";
// 			ans.push_back(i); 
//         }
//     }
// } 

// // Driver code 
// int main() 
// { 
	
// 	bitWiseSieve();
//     int t; cin >> t;
//     while(t--){
//         int src; cin >> src;
//         cout << ans[src] << "\n";
//     }
// 	return 0; 
// } 




#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<bool> vec(90000001, true);
vector<int> ans;

void siv()
{
    for (int i = 2; i <= 90000000; i++)
    {
        if (vec[i] == true)
        {
            ans.push_back(i);
            for (int j = i * i; j <= 90000001; j += i)
            {
                vec[j] = false;
            }
        }
    }
}

int32_t main()
{
    int q;
    cin >> q;
    siv();

    while (q--)
    {
        int n;
        cin >> n;
        cout << ans[n - 1] << endl;
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<bool> vec(90000001, true);
vector<int> ans;

void pre_cal()
{
    for (int i = 2; i <= 90000000; i++)
    {
        if (vec[i] == true)
        {
            ans.push_back(i);
            for (int j = i * i; j <= 90000001; j += i)
            {
                vec[j] = false;
            }
        }
    }
}

int32_t main()
{
    int q;
    cin >> q;
    pre_cal();

    while (q--)
    {
        int n;
        cin >> n;
        cout << ans[n - 1] << endl;
    }

    return 0;
}


