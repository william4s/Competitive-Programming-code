#include<bits/stdc++.h>
using namespace std;

int main(){
	double h,t,ans;
	int i=1;
	cin>>h;
	ans=h;
	while (h/2>0.01)
	{
		h*=0.5;
		ans+=h*2;
		i++;
	}
	cout<<ans<<endl<<i;
	
	return 0;
}
