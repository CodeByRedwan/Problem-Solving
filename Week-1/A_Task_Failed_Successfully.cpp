// Problem link:https://atcoder.jp/contests/abc412/tasks/abc412_a
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
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a < b)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}