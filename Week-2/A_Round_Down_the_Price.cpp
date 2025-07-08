// Problem link:https://codeforces.com/problemset/problem/1702/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
void solve()
{
    ll num;
    cin>>num;
    string str=to_string(num);
    int div=1;
    for(int i=1;i<str.size();i++)
    {
        div*=10;
    }
    cout<<num-div<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}