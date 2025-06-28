// Problem link:https://atcoder.jp/contests/abc412/tasks/abc412_b
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
    string s,t;
    cin>>s>>t;
    vector<char>v;
    for(int i=1;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            v.push_back(s[i-1]);
        }
    }
    int cnt=0;
    for(auto val:v)
    {
        for(int i=0;i<t.size();i++)
        {
            if(val==t[i])
            {
                cnt++;
                break;
            }
        }
    }
    if(v.size()==cnt)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
    }
    return 0;
}