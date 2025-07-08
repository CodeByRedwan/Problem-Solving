// Problem link:https://codeforces.com/problemset/problem/1884/A
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
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        while (true)
        {
            ll tmp = n;
            int d_sum = 0;
            while (tmp > 0)
            {
                d_sum += tmp % 10;
                tmp /= 10;
            }
            if (d_sum % k == 0)
            {
                cout << n << '\n';
                break;
            }
            else
            {
                n++;
            }
        }
    }


    return 0;
}