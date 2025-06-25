// Problem link:https://atcoder.jp/contests/abc383/tasks/abc383_a
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
    vector<pair<int,int>>v;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        v.emplace_back(a,b);    
    }
    int ans=v[0].second;
    for(int i=1;i<v.size();i++)
    {
        int first=v[i-1].first;
        int second=v[i].first;
        int dif=second-first;
        if(dif>=ans)
        {
            ans=0;
        }
        else
        {
            ans-=dif;
        }
        ans+=v[i].second;

    }
    cout<<ans<<'\n';
   return 0;
}