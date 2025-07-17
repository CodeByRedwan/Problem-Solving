// Problem link:https://codeforces.com/contest/2126/problem/0
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
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str[0]<<'\n';
    }
    return 0;
}