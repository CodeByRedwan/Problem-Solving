// Problem link:https://codeforces.com/contest/1729/problem/B
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
    int it=1;
    int ch='a';
    vector<char>v(27);
    for(int i=1;i<=26;i++)
    {
        v[it]=ch;
        it++;
        ch++;
    }
    int t;
    cin>>t;;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        vector<char>ans;
        for(int i=str.size()-1;i>=0;)
        {
            if(str[i]=='0')
            {
                string ch="";
                ch+=str[i-2];
                ch+=str[i-1];
                int indx=stoi(ch);
                ans.push_back(v[indx]);
                i=i-3;
            }
            else
            {   
                string ch="";
                ch+=str[i];
                int indx=stoi(ch);
                ans.push_back(v[indx]);
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        cout<<'\n';
    }
    return 0;
}