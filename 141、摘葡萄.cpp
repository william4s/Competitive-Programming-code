#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h,h1,w,ans=0;
	cin>>n>>h;
	for (int i=0;i<n;i++)
	{
		cin>>h1>>w;
		if (h1<=h)
			{
				ans+=w;
			}
	}
	cout<<ans;
	return 0;
}

