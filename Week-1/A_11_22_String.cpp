// Problem link:https://atcoder.jp/contests/abc381/tasks/abc381_a
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
    int t;
    string str;
    cin>>t>>str;
    if(t%2==0){
        cout<<"No"<<'\n';
    }
    else if(t==1)
    {
        if(str[0]=='/')
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"\n";
        }
    }
    else
    {
        int t1,t2,t3;
        t2=((t+1)/2);
        t1=t2-1;
        t3=t2+1;
        int cnt=0;
        if(str[t1-1]=='1')
        {
            cnt++;
        }
        if( str[t2-1]=='/')
        {
            cnt++;
        }
        if(str[t3-1]=='2')
        {
            cnt++;
        }
        if(cnt==3)
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        } 
        
    }
    return 0;
}