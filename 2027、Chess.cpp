#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,T,r1,c1,r2,c2;	
	cin>>T;
	while(T--)
	{
		cin>>n>>r1>>c1>>r2>>c2;
		int a1,a2;
		a1=(r1+c1)%2;
		a2=(r2+c2)%2;
		if (a1!=a2)
			cout<<"-1\n";
		else if (r1==r2&&c1==c2)
			cout<<"0\n";
		else if(abs(r1-r2)==abs(c1-c2))
			cout<<"1\n";
		else
			cout<<"2\n";
	//	cout<<a1<<' '<<a2<<endl;
	}
	
	return 0;
}

