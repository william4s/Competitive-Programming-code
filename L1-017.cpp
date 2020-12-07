#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
/*	ios::sync_with_stdio(false);
    cin.tie(0);
  */  cout.tie(0);
	string s;
	double ans=0,sum=0;
	cin>>s;
	ll st=0,len=s.size();
	if (s[0]=='-')
	{
		st+=1;
		len-=1;
	}
	for(ll i=st;i<s.size();i++)
	{
		
		if (s[i]=='2')
			sum++;
	}
	bool pd=0;
	if ((s[s.size()-1]-'0')%2==0)
		pd=1;
	ans=sum*1.0/len;
	if (pd)
		ans*=2.0;
	if (st)
		ans*=1.5;
	printf("%.2lf%\n",ans*100);
	 
	return 0;
}



