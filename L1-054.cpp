#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
char s[110][110];
ll n;
void print(char c)
{

	for (ll i=n; i>=1; i--)
	{
		for (ll j=n; j>=1; j--)
			if (s[i][j]=='@')
				cout<<c;
			else
				cout<<s[i][j];
		cout<<endl;
	}

}
int main()
{


	char c;
	cin>>c>>n;
	getchar();
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=n; j++)
		{
			char x;
			x=getchar();
			s[i][j]=x;
		}
		char ch=getchar();
	}
	bool pd=1;
	for (ll i=1; i<=n/2; i++)
		for (ll j=1; j<=n; j++)
		{
			if (s[i][j]!=s[n-i+1][j])
			{
				pd=0;

				print(c);
				return 0;
			}
		}
	cout<<"bu yong dao le\n";
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=n; j++)
		{
			if(s[i][j]=='@')
				cout<<c;
			else 
				cout<<s[i][j];
		}
		cout<<endl;
	}

	return 0;
}



