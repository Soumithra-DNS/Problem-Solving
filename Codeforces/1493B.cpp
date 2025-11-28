#include <bits/stdc++.h>
using namespace std;
int H, M;
string com(string str)
{
    if (str.size() == 1)
    {
        str = '0' + str;
    }
    return str;
}

bool valid(int h, int m)
{
    // cout << h << " " << m << "\n";
    if (h < H && m < M)
    {
        return true;
    }
    return false;
}

bool val(string h, string m)
{
    for (int i = 0; i < 2; i++)
    {
        if (h[i] == '3' || h[i] == '4' || h[i] == '6' || h[i] == '7' || h[i] == '9')
        {
            return true;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (m[i] == '3' || m[i] == '4' || m[i] == '6' || m[i] == '7' || m[i] == '9')
        {
            return true;
        }
    }
    return false;
}

string exc(string str)
{
    for (int i = 0; i < 2; i++)
    {
        if (str[i] == '2')
        {
            str[i] = '5';
        }
        else if (str[i] == '5')
        {
            str[i] = '2';
        }
    }
    return str;
}

void solve()
{
    cin >> H >> M;
    int h, m;
    char c;
    cin >> h >> c >> m;

    int j = m;
    for (int i = h; i < H; i++)
    {
        for (j = j; j < M; j++)
        {
            string n_h = to_string(i);
            n_h = com(n_h);
            string n_m = to_string(j);
            n_m = com(n_m);
            // cout << n_h << " " << n_m << "\n";
            if (val(n_h, n_m))
            {
                continue;
            }
            string ans = n_h + ":" + n_m;
            swap(n_h[0], n_m[1]);
            swap(n_h[1], n_m[0]);
            // cout << n_h << " " << n_m << "\n";
            n_h = exc(n_h);
            n_m = exc(n_m);
            // cout << n_h << " " << n_m << "\n";

            int hh = stoi(n_h);
            int mm = stoi(n_m);
            if (valid(hh, mm))
            {
                cout << ans << "\n";
                return;
            }
        }
        j = 0;
    }

    cout << "00:00" << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
string h, m;
bool val(string s)
{
    if (h[0] < s[0])
    {
        return false;
    }
    else if (h[0] == s[0] && h[1] < s[1])
    {
        return false;
    }

    if (m[0] < s[3])
    {
        return false;
    }
    else if (m[0] == s[3] && m[1] < s[4])
    {
        return false;
    }
    return true;
}
bool valid(string time)
{
    string s;
    s[0] = time[4];
    s[1] = time[3];
    s[2] = time[2];
    s[3] = time[1];
    s[4] = time[0];
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == '2')
        {
            s[i] = '5';
        }
        else if (s[i] == '5')
        {
            s[i] = '2';
        }
    }
    // if (h[0] < s[0])
    // {
    //     return false;
    // }
    // else if (h[0] == s[0] && h[1] < s[1])
    // {
    //     return false;
    // }

    // if (m[0] < s[3])
    // {
    //     return false;
    // }
    // else if (m[0] == s[3] && m[1] < s[4])
    // {
    //     return false;
    // }
    // return true;
    if (val(s))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    cin >> h >> m;
    string time;
    cin >> time;
    string s = "25:50";
    // if(valid(s)){
    //     cout << 1 << "\n";
    // }

    vector<char> v_digit = {'0', '1', '2', '5', '8'}, v_ans = {'0', '1', '5', '2', '8'};
    int j = 0;
    // if(time[4] > '8'){
    //     time[4] = '0';
    //     time[3]++;
    // }
    // if(time[3] > '8'){
    //     time[3] = '0';
    //     time[1]++;
    // }
    // if(time[1] > '8'){
    //     time[1] = '0';
    //     time[0]++;
    // }
    // if(time[0] > '8'){
    //     time[0] = '0';
    // }
    for (int k = 0; k < 5; k++)
    {
        if (v_digit[k] >= time[4])
        {
            j = k;
            break;
        }
    }
    int i = 0;
    for (int k = 0; k < 5; k++)
    {
        if (v_digit[k] >= time[3])
        {
            i = k;
            break;
        }
    }
    int y = 0;
    for (int k = 0; k < 5; k++)
    {
        if (v_digit[k] >= time[1])
        {
            y = k;
            break;
        }
    }
    int x = 0;
    for (int k = 0; k < 5; k++)
    {
        if (v_digit[k] >= time[0])
        {
            x = k;
            break;
        }
    }

    for (x = x; x < 5; x++)
    {
        for (y = y; y < 5; y++)
        {
            for (i = i; i < 5; i++)
            {
                for (j = j; j < 5; j++)
                {
                    time[4] = v_digit[j];
                    time[3] = v_digit[i];
                    time[1] = v_digit[y];
                    time[0] = v_digit[x];

                    if (val(time) && valid(time))
                    {
                        cout << time << "\n";
                        return;
                    }
                }
                j = 0;
            }
            i = 0;
        }
        y = 0;
    }
    x = 0;
    time[4] = '0';
    time[3] = '0';
    time[1] = '0';
    time[0] = '0';

    cout << time << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

*/
