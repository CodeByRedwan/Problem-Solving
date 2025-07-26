// Problem link:https://codeforces.com/problemset/problem/1902/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=count(str.begin(),str.end(),'1');
        if(cnt==n)cout<<"NO"<<nl;
        else
        cout<<"YES"<<nl;
      
    }
}
