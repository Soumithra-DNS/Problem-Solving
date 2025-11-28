// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 1e8;
// vector<int> vec(N + 1, 0);
// vector<int> ans;

// void pre_cal()
// {
//     int cnt = 0;
//     for (int i = 2; i <= N; i++)
//     {
//         if (vec[i] == 0)
//         {
//             vec[i] = ++cnt;
//             for (int j = i * i; j <= N; j += i)
//             {
//                 vec[j] = -1;
//             }
//         }
//     }

// }

// int32_t main()
// {
//     pre_cal();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int pri;
//         cin >> pri;
//         int pos = vec[pri];
//         if (pos < 0)
//         {
//             cout << pos << "\n";
//             continue;
//         }
//         int n = sqrt(pos);
//         int total = (n * (n + 1)) / 2;
//         while (total < pos)
//         {
//             n++;
//             total = (n * (n + 1)) / 2;
//         }
//         n--;
//         pos = pos - ((n * (n + 1)) / 2);
//         n++;
//         cout << n << " " << pos << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 1e8;
// vector<int> vec(N + 1, 0);

// void pre_cal()
// {
//     int cnt = 0;
//     for (int i = 2; i <= N; i++)
//     {
//         if (vec[i] == 0)
//         {
//             vec[i] = ++cnt;
//             for (int j = i * i; j <= N; j += i)
//             {
//                 vec[j] = -1;
//             }
//         }
//     }
// }

// int32_t main()
// {
//     pre_cal();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int pri;
//         cin >> pri;
//         int pos = vec[pri];
//         if (pos < 0)
//         {
//             cout << "-1\n";
//             continue;
//         }

//         int n = sqrt(2 * pos);
//         int total = (n * (n + 1)) / 2;
//         while (total < pos)
//         {
//             n++;
//             total = (n * (n + 1)) / 2;
//         }
//         n--;
//         pos = pos - ((n * (n + 1)) / 2);
//         n++;
//         cout << n << " " << pos << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e7;
// vector<int> vec(N + 1, 0);
// vector<pair<int, int>> v(N + 1);

// void pre_cal()
// {
//     int cnt = 0;
//     for (int i = 2; i <= N; i++)
//     {
//         if (vec[i] == 0)
//         {
//             vec[i] = ++cnt;
//             for (int j = i * i; j <= N && j > 0; j += i)
//             {
//                 vec[j] = -1;
//             }
//         }
//     }
//     int r = 1, c = 1;

//     for (int i = 2; i <= N; i++)
//     {
//         if (vec[i] != -1)
//         {
//             v[i]={r, c};
//             if (r == c)
//             {
//                 r++;
//                 c = 1;
//             }
//             else
//             {
//                 c++;
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     pre_cal();
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll pri;
//         cin >> pri;
//         if (pri > N || vec[pri] <= 0)
//         {
//             cout << "-1\n";
//             continue;
//         }

//         // int pos = vec[pri];
//         cout << v[pri].first << " " << v[pri].second << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 1;
vector<int> status(N + 1, 1);
vector<int> prime;
vector<pair<int, int>> ans;
map<int, pair<int, int>> mp;
vector<pair<int, int>> res(N);

void siv()
{
    int r = 1, c = 1;
    status[0] = status[1] = 0;
    for (int i = 2; i < sqrt(N); i++)
    {
        if (status[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                status[j] = 0;
            }
        }
    }

    // for (int i = 0; i < N; i++)
    // {
    //     if (status[i])
    //     {
    //         mp[i] = {r, c};
    //         if (r == c)
    //         {
    //             r++;
    //             c = 0;
    //         }
    //         c++;
    //     }
    // }
}
void find_position()
{
    long row=1, col=1;
    res[2]=make_pair(row, col);
    col+=1;
    for(long i=3;i<N;i+=2)
    {
        if(row<col)
        {
            row+=1;
            col=1;
        }
        if(status[i])
        {
            res[i]=make_pair(row,col);
            col+=1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    siv();
    find_position();
    int t;
    cin >> t;
    while (t--)
    {
        int src;
        cin >> src;
        if (status[src] == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << res[src].first << " " << res[src].second << "\n";
            //cout << mp[src].first << " " << mp[src].second << "\n";
        }
    }
    return 0;
}
