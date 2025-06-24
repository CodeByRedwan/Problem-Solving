// Problem link:https://atcoder.jp/contests/abc380/tasks/abc380_a
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
    int one_count=0,two_count=0,three_count=0;
    for(int i = 0; i < str.size (); i++)
    {
        if(str[i]=='1'){
            one_count++;
        }
        else if(str[i]=='2'){
            two_count++;
        }
        else if(str[i]=='3'){
            three_count++;
        }
    }
    if(one_count==1 && two_count==2 && three_count==3){
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
    }
    return 0;
}