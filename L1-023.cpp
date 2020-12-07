#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[4];
bool pd(char ch,char t)
{
	if (ch==t)
		return 1;
	if (ch==t+('a'-'A'))
		return 1;
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	cin>>s;
	for (ll i=0;i<s.size();i++)
	{
		if (pd(s[i],'G'))
			a[0]++;
		if (pd(s[i],'P'))
			a[1]++;
		if (pd(s[i],'L'))
			a[2]++;
		if (pd(s[i],'T'))
			a[3]++;
	}

	while(a[0]||a[1]||a[2]||a[3])
	{
		for (ll i=0;i<4;i++)
		{
			if (a[i])
			{
				if (i==0)
					cout<<"G";
				if (i==1)
					cout<<"P";
				if (i==2)
					cout<<"L";
				if (i==3)
					cout<<"T";
				a[i]-=1;
			}
		}
	}
	cout<<"\n";
	return 0;
}



