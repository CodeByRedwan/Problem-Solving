// Problem link:https://codeforces.com/contest/2126/problem/B
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                cnt++;
                if (cnt == k)
                {
                    ans++;
                    i++;
                    cnt = 0;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}