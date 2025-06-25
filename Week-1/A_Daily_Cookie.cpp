// Problem link:https://atcoder.jp/contests/abc382/tasks/abc382_a
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
    int count=0;
    for(int i= 0;i<str.size();i++)
    {
        if(str[i]=='.'){
            count++;
        }
    }
    cout<<count+t<<nl;
    return 0;
}