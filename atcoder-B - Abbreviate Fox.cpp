/*
Seven times have I despised my soul:
¡ª¡ªKahlil Gibran
The first time when I saw her being meek that she might attain height.
The second time when I saw her limping before the crippled.
The third time when she was given to choose between the hard and the easy, and she chose the easy.
The fourth time when she committed a wrong, and comforted herself that others also commit wrong.
The fifth time when she forbore for weakness, and attributed her patience to strength.
The sixth time when she despised the ugliness of a face, and knew not that it was one of her own masks.
And the seventh time when she sang a song of praise, and deemed it a virtue.
*/

#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll n,ans,a,b,c;
string s,tt="fox";
void dg(ll i,ll j)
{
	if (i<0||j>=n) return ;
	bool pd1=0,pd2=0;
	while(i-1>=0&&s[i-1]=='0') i--,pd1=1;
	while(j+1<n&&s[j+1]=='0') j++,pd2=1;


//	cout<<i<<' '<<j<<endl;
	if (i<0||j>=n) return ;
	if (i-2>=0&&j+1<n&&s[i-2]=='f'&&s[i-1]=='o'&&s[j+1]=='x')
	{
		s[i-2]='0';
		s[i-1]='0';
		s[j+1]='0';
		ans++;
		dg(i-2,j+1);
	}
	else if (i-1>=0&&j+2<n&&s[i-1]=='f'&&s[j+1]=='o'&&s[j+2]=='x')
	{
		s[i-1]='0';
		s[j+1]='0';
		s[j+2]='0';
		ans++;
		dg(i-1,j+2);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>s;
	for (ll i=0; i<n-2; i++)
	{
		if (s[i]=='f'&&s[i+1]=='o'&&s[i+2]=='x')
		{
			for (ll j=i; j<i+3; j++)
				s[j]='0';
			ans++;
			dg(i,i+2);
		}

	}
	ll cnt=0;
	do
	{
		cnt=0;
		for (ll i=0; i<n-2; i++)
		{
			if (s[i]=='f')
			{
				ll j=i+1,k;
				while(s[j]=='0') j++;
				if (s[j]=='o')
				{
					k=j+1;
					while(s[k]=='0') k++;
					if (s[k]=='x') {
						cnt++,ans++;
						s[i]='0';
						s[j]='0';
						s[k]='0';
					}
				}
			}
		}
	}while(cnt);
		cout<<n-3*ans;//<<endl<<s;
	return 0;

}


