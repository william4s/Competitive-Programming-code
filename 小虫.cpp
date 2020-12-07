#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,m;
	double t,Abs=0,sum=0;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
		Abs+=abs(t);
	}
	cout<<fixed<<setprecision(0)<<sum<<" "<<fixed<<setprecision(2)<<Abs/(double)m;
	
	return 0;
} 
