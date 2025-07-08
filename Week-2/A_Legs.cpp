// Problem link:https://codeforces.com/contest/1996/problem/A
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
        int n;
        cin>>n;
        int ans=n/4;
        n%=4;
        ans+=n/2;
        cout<<ans<<'\n';
    }
    return 0;
}