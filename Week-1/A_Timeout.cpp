// Problem link:https://atcoder.jp/contests/abc408/tasks/abc408_a
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
    int n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bool ok=false;
    int dif=0;
    for(int i=0;i<n;i++)
    {
      if(v[i]-dif>s)
      {
        cout<<"No"<<'\n';
        return 0;
      }
      dif=v[i];
    }
    cout<<"Yes"<<'\n';
}