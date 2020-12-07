#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
int h[10],val[N*10],ne[N*10],n;
bool v[N];
string check(int x)
{
	int n=0;
	string s="";
	while(x)
	{
		n++;
		s=char(x%10+'0')+s;
		x/=10;
	}
	for (ll i=0;i<5-n;i++)
		s='0'+s;
	return s;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>h[1]>>n;
	h[2]=-1;
	for(int i=0; i<n; i++)
	{
		int pos,x,nex;
		cin>>pos>>x>>nex;
		val[pos]=x;
		ne[pos]=nex;
	}


	int pre,i,x;
	bool pd=1,last;
	for ( i=h[1]; i!=-1; i=x)
	{
		//cout<<val[i]<<' ';
		int t=abs(val[i]);
		if (!v[t])
			v[t]=1,x=ne[i];
		else
		{
			ne[pre]=ne[i];
			x=ne[i];

			if (pd)
			{
				pd=0;
				ne[i]=h[2],h[2]=i;
			}
			else
				ne[last]=i,ne[i]=-1;
			last=i;
		}
		pre=i;
	}
	//cout<<endl<<val[i]<<' '<<i;
	for (int i=h[1]; i!=-1; i=ne[i])
		cout<<check(i)<<' '<<val[i]<<' '<<ne[i]<<endl;
	for (int i=h[2]; i!=-1; i=ne[i])
		cout<<check(i)<<' '<<val[i]<<' '<<ne[i]<<endl;
	return 0;
}



