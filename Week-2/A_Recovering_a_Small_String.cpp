// Problem link:https://codeforces.com/problemset/problem/1931/A
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = "";
        if (n <= 28)
        {
            ans += "aa";
            ans += ('a' + (n - 3));
        }
        else if (n <= 53)
        {
            ans += 'a';
            ans += ('a' + (n - 28));
            ans += 'z';
        }
        else
        {
            ans += ('a' + (n - 53));
            ans += "zz";
        }
        cout << ans << '\n';
    }

    return 0;
}