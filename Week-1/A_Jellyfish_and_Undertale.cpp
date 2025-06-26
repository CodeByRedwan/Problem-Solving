// Problem link:https://codeforces.com/contest/1875/problem/A
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans+=min(a-1,v[i]);
        }
        ans+=b;
        cout<<ans<<'\n';
    }
   return 0;
}