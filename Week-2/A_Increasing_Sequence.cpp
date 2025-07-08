// Problem link:https://codeforces.com/problemset/problem/1882/A
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
        vector<int>v(n);
        for(int i =0; i <n; i++)
        {
            cin>>v[i];
        }
       ll ans=0;
       for(int i=0;i<n;i++)
       {
        if(ans+1==v[i])
        {
            ans+=2;
        }
        else
        {
            ans+=1;
        }
       }
       cout<<ans<<'\n';

    }
    return 0;
}