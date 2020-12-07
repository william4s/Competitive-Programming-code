#include<bits/stdc++.h>
using namespace std;
vector<string>a;
bool cmp(string x,string y)
{
	if (x.size()<y.size())
		return 1;
	return x<y;
}
int main(){

	long n,i,j,s=1;
	string x,t;
	cin>>n;
	for (i=0;i<n;i++) 
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),cmp);
	t=a[0];
	for (i=1;i<a.size();i++)
	{
		if (t==a[i])	s++;
		else
		{
			cout<<t<<' '<<s<<endl;
			s=1;
			t=a[i];
		}
	}
	cout<<t<<' '<<s<<endl;
	return 0;
}

