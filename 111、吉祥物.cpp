#include<bits/stdc++.h>
using namespace std;
int a[1010];
string fx(long x)
{
	string s1="";
	int k=0;
	if (x==0)	s1="0";
	while(x)
	{
		s1=char((x%2)+'0')+s1;
		x/=2;
	}
//	reverse(s1.begin(),s1.end());
	return s1;
}
int main()
{
	int i,j,k,n,maxn=INT_MIN;
	string s;
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]>maxn)
			maxn=a[i];
	}
	long t=1;
	s="1";
	while(s.size()<maxn)
	{
		t*=2;
		s=s+fx(t);
	//	cout<<fx(t);
	}
//	cout<<s;
	for (i=0;i<n;i++)
		cout<<s[a[i]-1]<<endl;
	return 0;
}

