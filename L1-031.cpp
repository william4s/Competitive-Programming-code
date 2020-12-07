#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	while(n--)
	{
		double h,w,t;
		cin>>h>>w;
		t=(h-100)*0.9*2;
		if (fabs(w-t)<t*0.1)
			cout<<"You are wan mei!\n";
		else if (w>t)
			cout<<"You are tai pang le!\n";
		else
			cout<<"You are tai shou le!\n";
	 } 
	return 0;
}



