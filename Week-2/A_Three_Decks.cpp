// Problem link:https://codeforces.com/problemset/problem/2104/A
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
        ll a,b,c;
        cin>>a>>b>>c;
        bool ok=true;
        if((a+b+c)%3!=0)
        {
            ok=false;
        }
        else
        {
            int div=(a+b+c)/3;
            if(div<a || div<b)
            {
                ok=false;
            }
        }
        if(ok)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}