// Problem link:https://codeforces.com/problemset/problem/1987/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
int main()
{
    // int cs = 0;
    // cout << "Case " << ++cs << ": ";
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n,t;
        cin>>n>>t;
        int ans=((n-1)*t)+1;
        cout<<ans<<'\n';
    }
    return 0;
}