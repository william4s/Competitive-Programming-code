#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int s[15],p[15],w[15];
int wrd[10];
int main(){
	ios::sync_with_stdio(false);
	for (ll i=0;i<14;i++)
	{
		string str;
		cin>>str;
		if (str[0]>='0'&&str[0]<='9')
		{
			if (str[1]=='s')
			{
				s[str[0]-'0']++;
			}
			else if (str[1]=='p')
			{
				p[str[0]-'0']++;
			}
			else if (str[1]=='w')
			{
				w[str[0]-'0']++;
			}
		}
		else
		{
			//"dong","nan","xi","bei","zhong","fa","bai"
			if (str=="dong")
				wrd[1]++;
			if (str=="nan")
				wrd[2]++;
			if (str=="xi")
				wrd[3]++;
			if (str=="bei")
				wrd[4]++;
			if (str=="zhong")
				wrd[5]++;
			if (str=="fa")
				wrd[6]++;
			if (str=="bai")
				wrd[7]++;
		}//s,p,w
	}
		if (s[1]>=1&&p[1]>=1&&w[1]>=1&&s[9]>=1&&p[9]>=1&&w[9]>=1)
		{
			bool pd=1;
			for (ll i=1;i<=7;i++)
				if (wrd[i]==0)
					pd=0;
			if (pd)
			{
				cout<<"shisanyao!\n";
				return 0;	
			}
		}
		else
		{
			ll l1,l2,l3;
			l1=count(s+1,s+10,0);
			l2=count(p+1,p+10,0);
			l3=count(w+1,w+10,0);
			if ((l1==9&&l2==9))
			{
				if (w[1]>=3&&w[9]>=3)
				{
					cout<<"jiulianbaodeng!\n";
					return 0;
				}
					
			}
			else if(l1==9&&l3==9)
			{
				if (p[1]>=3&&w[9]>=3)
				{
					cout<<"jiulianbaodeng!\n";
					return 0;
				}
			}
			else if (l2==9&&l3==9)
			{
				if (s[1]>=3&&w[9]>=3)
				{
					cout<<"jiulianbaodeng!\n";
					return 0;
				}	
			}
			
		}
	
	cout<<"I dont know!\n";
	
	
	return 0;
}
