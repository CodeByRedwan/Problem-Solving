// Problem link:https://codeforces.com/contest/1077/problem/A
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
        ll a,b,k;
        cin>>a>>b>>k;
        ll ans=0;
        if(k%2==0)
        {
            k=k/2;
            ans=(k*a)-(k*b);
        }
        else
        {
            k=k/2;
            ans=((k+1)*a)-(k*b);
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}