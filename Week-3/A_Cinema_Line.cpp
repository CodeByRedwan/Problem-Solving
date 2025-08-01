// Problem link:https://codeforces.com/contest/349/problem/A
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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int tweenty_f=0,fifty=0,hndrd=0;
    bool ok=true;
    for(auto val:v)
    {
        if(val==25)
        {
            tweenty_f++;
        }
        else if(val==50)
        {
            if(tweenty_f<=0)
            {
                ok=false;
                break;
            }
            else
            {
                tweenty_f--;
                fifty++;
            }
        }
        else if(val==100)
        {
            if( fifty<=0 && tweenty_f<3)
            {
                ok=false;
                break;
            }
              if( fifty>0 && tweenty_f==0)
            {
                ok=false;
                break;
            }
            else if(fifty>0 && tweenty_f>=1)
            {
                 tweenty_f--;
                 fifty--;
            }
            else if(fifty==0 && tweenty_f>=3)
            {
                tweenty_f-=3;
            }
        }
    }
    if(ok) cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
    return 0;
}