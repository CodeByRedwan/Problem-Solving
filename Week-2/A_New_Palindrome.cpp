// Problem link:https://codeforces.com/problemset/problem/1832/A
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool ok=false;
        for(int i=1;i<str.size()/2;i++)
        {
            if(str[i]!=str[i-1])
            {   
                ok=true;
                break;
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
    }
    return 0;
}