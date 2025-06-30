// Problem link:https://codeforces.com/contest/160/problem/A
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define nl '\n'
#define ll long long int
int main()
{
    // int cs = 0;
    // cout << "Case " << ++cs << ": ";
    fastio();
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    sort(v.rbegin(), v.rend());
    int take = v[0];
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (take > sum / 2)
        {
            break;
        }
        else
        {
            take += v[i];
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}