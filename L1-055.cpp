#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll a,b,x,w=0,e=0;
	cin>>a>>b;
	for (ll i=0;i<3;i++)
	{
		cin>>x;
		if (x==0)
			w++;
		else
			e++;
	}
	if (a>b&&w)
	{
		cout<<"The winner is a: "<<a<<" + "<<w<<endl;
		
	}
	else if (b>a&&e)
	{
		cout<<"The winner is b: "<<b<<" + "<<e<<endl;
	
	}
	else if (w==3)
	{
		cout<<"The winner is a: "<<a<<" + "<<w<<endl;
	}
	else
		cout<<"The winner is b: "<<b<<" + "<<e<<endl;
	
	return 0;
}



