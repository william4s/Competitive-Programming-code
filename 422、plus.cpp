#include<bits/stdc++.h>
using namespace std;
int x[5000],y[5000],ans[5000];
void indatas(string s,int *p)
{
	reverse(s.begin(),s.end());
	for (int i=0; i<s.size(); i++)
	{
		p[i+1]=int(s[i]-'0');
	}
	p[0]=s.size();
}
int main()
{
	string a,b;
	long t,i,j;
	cin>>a>>b>>t;
	indatas(a,x);
	indatas(b,y);
	int l=max(x[0],y[0]);
	int jw=0;

	for (i=1; i<=l+1; i++)
	{
		ans[i]=x[i]+y[i]+jw;
		jw=ans[i]/10;
		if  (ans[i]==t) jw+=1;
		ans[i]=ans[i]%10;
	//	cout<<ans[i];
	}
	while(ans[i]==0) i--;
//	cout<<i<<endl;
	for (j=i;j>0;j--)
		cout<<ans[j]; 
	return 0;
}

