// Problem link:https://atcoder.jp/contests/abc380/tasks/abc380_b
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
    string str;
    cin>>str;
    vector<int>v;
    int cnt=0;
    for(int i =1; i < str.size(); i++)
    {
       if(str[i]=='-')
       {
        cnt++;
       }
       else
       {
        v.push_back(cnt);
        cnt=0;
       }
    }
    for(auto i : v)
    {
        cout<<i<<' ';
    }
    return 0;
}