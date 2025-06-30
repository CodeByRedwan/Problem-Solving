// Problem link:https://atcoder.jp/contests/abc409/tasks/abc409_a
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
    int n;cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        if(str1[i]=='o' && str2[i]=='o')
        {
            ok=true;
            break;
        }
    }
    if(ok){
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<"\n";
    }
    return 0;
}