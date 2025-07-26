// Problem link:https://codeforces.com/problemset/problem/703/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();

    int n;
    cin>>n;
    int m_cnt=0,ch_cnt=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) m_cnt++;
        else if(a<b) ch_cnt++;
    }   
    if(m_cnt>ch_cnt)cout<<"Mishka"<<'\n';
    else if( ch_cnt>m_cnt)cout<<"Chris"<<'\n';
    else
    cout<<"Friendship is magic!^^"<<'\n';
    return 0;
}