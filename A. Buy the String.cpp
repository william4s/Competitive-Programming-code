#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll Q;
    cin>>Q;
    while(Q--)
    {
    	ll n,qw,ret,h,trh=0,a1=0;
    	cin>>n>>qw>>ret>>h;
    	
    	string ss;
    	cin>>ss;
    	for (ll i=0;i<ss.size();i++)
    		if (ss[i]=='0')
    			trh++;
    		else
    			a1++;
    	if (qw==ret)
    		cout<<n*qw<<endl;
    	else
    	if (qw+h<ret)
    		cout<<(qw+h)*a1+qw*trh<<"\n";
    	else if (ret+h<qw)
    		cout<<(ret+h)*trh+ret*a1<<"\n";
    	else
    		cout<<ret*a1+qw*trh<<"\n";
    		
    	
	}
	return 0;
}



