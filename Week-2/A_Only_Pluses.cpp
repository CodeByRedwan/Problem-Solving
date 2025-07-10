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
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<5;i++)
        {
            sort(v.begin(),v.end());
            v[0]++;
        }
        cout<<(v[0]*v[1]*v[2])<<'\n';
    }

    
    return 0;
}