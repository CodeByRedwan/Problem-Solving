// Problem link:https://codeforces.com/contest/112/problem/A
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
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
        if(isupper(b[i]))
        {
            b[i]=tolower(b[i]);
        }
    }
    if(a>b)
    {
        cout<<"1"<<'\n';
    }
    else if(a<b)
    {
        cout<<"-1"<<'\n';
    }
    else
    {
        cout<<"0"<<'\n';
    }
    return 0;
}