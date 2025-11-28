#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    queue<pair<int, int>> qu;
    priority_queue<pair<int, int>> pq;

    vector<int> vis(q + 1), ans;
    int pos = 1;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int m;
            cin >> m;
            qu.push({m, pos});
            pq.push({m, -pos});
            pos++;
        }
        else if (x == 2)
        {
            while (true)
            {
                if (qu.empty())
                {
                    break;
                }
                auto p = qu.front();
                qu.pop();
                if (!vis[p.second])
                {
                    ans.push_back(p.second);
                    vis[p.second] = 1;
                    break;
                }
            }
        }
        else
        {
            while (true)
            {
                if (pq.empty())
                {
                    break;
                }
                auto p = pq.top();
                pq.pop();
                if (!vis[p.second * -1])
                {
                    ans.push_back(p.second * -1);
                    vis[p.second * -1] = 1;
                    break;
                }
            }
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

// // C++ implementation of the
// // priority queue of pairs
// // ordered by the first element

// #include <iostream>
// #include <queue>
// using namespace std;

// // Function to print the data of
// // the priority queue ordered by first
// void showpq(
// 	priority_queue<pair<int, int> > g)
// {
// 	// Loop to print the elements
// 	// until the priority queue
// 	// is not empty
// 	while (!g.empty()) {
// 		cout << g.top().first
// 			<< " " << g.top().second
// 			<< endl;
// 		g.pop();
// 	}
// 	cout << endl;
// }

// // Driver Code
// int main()
// {
// 	priority_queue<pair<int, int> > p1;

// 	// Insertion of elements
// 	p1.push(make_pair(4, 5));
// 	p1.push(make_pair(5, 4));
// 	p1.push(make_pair(1, 6));
// 	p1.push(make_pair(7, 3));
//     p1.push(make_pair(5, 5));
// 	p1.push(make_pair(9, 4));
// 	showpq(p1);
// 	return 0;
// }
