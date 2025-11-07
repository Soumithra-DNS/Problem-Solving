#include <bits/stdc++.h>
using namespace std;
int m[10][10][10];

int main()
{
    int b[4][4] = {0};
    int adj[][4] = {{1, 0, 1, 0}, {0, 1, 0, 1}, {1, 0, 1, 0}, {0, 1, 0, 1}};
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            m[1][i][j] = adj[i][j];
        }
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         // p[1][i][j]=adj[i][j];
    //         cout << p[1][i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for (int p = 2; p <= 4; p++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                //  int temp = 0;
                for (int k = 0; k < 4; k++)
                {
                    m[p][i][j] = m[p][i][j] + (m[1][i][k] * m[p - 1][k][j]);
                }
            }
        }
    }
    for (int p = 1; p <= 4; p++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << m[p][i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int p = 1; p <= 4; p++)
            {
                b[i][j] += m[p][i][j];
            }
        }
    }
    bool check = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << b[i][j] << " ";
            if (b[i][j] == 0)
                check = 1;
        }
        cout << "\n";
    }
    if (check)
        cout << "Not strongly connected\n";
    else
        cout << "Strongly connected\n";
        return 0;
}