#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
typedef long long ll;
ll ne[N];
string p, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s)
    {
        ll ans=0;
        if (s=="#")
            return 0;
        cin>>p;
        ll n=p.size();
        ll m=s.size();
        
        for(int i = 1, j = 0; i < n; i ++)
        {
            while(j && p[i] != p[j]) j = ne[j - 1];
            if(p[i] == p[j]) j ++;
            ne[i] = j;
        }

        
        for(int i = 0, j = 0; i < m; i ++)
        {
            while(j && s[i] != p[j]) j = ne[j - 1];
            if(s[i] == p[j])
            {
                j ++;
                if(j == n)
                {
                    ans++;
                    j = ne[n];
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;

}
