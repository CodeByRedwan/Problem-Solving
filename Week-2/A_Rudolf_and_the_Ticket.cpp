// Problem link:https://codeforces.com/problemset/problem/1941/A
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
        int a,b,k;
        cin>>a>>b>>k;
        vector<int>v_first(a),v_scnd(b);
        for(int i=0;i<a;i++)
        {
            cin>>v_first[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>v_scnd[i];
        }
        int cnt=0;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(v_first[i]+v_scnd[j]<=k)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}