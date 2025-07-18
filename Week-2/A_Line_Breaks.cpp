// Problem link:https://codeforces.com/problemset/problem/2050/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<string>ans;
        for(auto val:v)
        {
            if(val.size()<=m)
            {
                ans.pb(val);
                m=m-val.size();
            }
            else
            {
                break;
            }
        }
        cout<<ans.size()<<'\n';

    }
    
    return 0;
}