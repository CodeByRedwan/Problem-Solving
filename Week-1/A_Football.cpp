// Problem link:https://codeforces.com/contest/96/problem/A
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
    string str;
    cin>>str;
    int sz=str.size();
    bool ok=false;
    if(sz>=7)
    {
        for(int i=0;i<sz;i++)
        {
            if(sz-i<7)
            {
                break;
            }
            if(str[i]==str[i+1] &&str[i]==str[i+2] && str[i]==str[i+3]&& str[i]==str[i+4]
                && str[i]==str[i+5] && str[i]==str[i+6])
                {
                    ok =true;
                }
        }
    }
    if(ok)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    return 0;
}