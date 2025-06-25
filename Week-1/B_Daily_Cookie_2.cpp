// Problem link:https://atcoder.jp/contests/abc382/tasks/abc382_b
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
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++)
    {
        if(t==0)
        {
            break;
        }
        if(str[i]=='@')
        {
            str[i]='.';
            t--;
        
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<nl;
    return 0;
}