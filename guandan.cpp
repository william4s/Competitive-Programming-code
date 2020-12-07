#include<bits/stdc++.h>
using namespace std;
int a[108];
string s;
void ts(int pos)
{

	if (s[1]>='2'&&s[1]<='9')
	{
		pos+=(s[1]-'2')*2;
	}
	if (a[pos])
	{
		a[pos+1]=1;
	}
	else
	{
		a[pos]=1;
	}

}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{

		//	string s;
		cin>>s;   //SB   ,HR
		//∫ÏÃ“£∫H ∫⁄Ã“ S √∑ª® C ∑Ω∆¨ D
		// T
		if (s=="SB"||s=="HR")
		{
			if (s=="SB") //104 105
			{
				if (a[104])
				{
					a[105]=1;
				}
				else
					a[104]=1;
			}
			else
			{
				if (a[106])
				{
					a[107]=1;

				}
				else
				{
					a[106]=1;
				}
			}
		}
		else////∫ÏÃ“£∫H ∫⁄Ã“ S √∑ª® C ∑Ω∆¨ D
		{
			int pos=0;
			if (s[1]=='T')
				pos+=16;
			else if (s[1]=='J')
				pos+=18;
			else if (s[1]=='Q')
				pos+=20;
			else if (s[1]=='K')
				pos+=22;
			else if (s[1]=='A')
				pos+=24;
			//huase fenbian
			if (s[0]=='S')
			{
				pos+=0;
				ts(pos);

			}
			else if (s[0]=='H')
			{
				pos+=26;
				ts(pos);

			}
			else if (s[0]=='C')
			{
				pos+=52;
				ts(pos);

			}
			else if (s[0]=='D')
			{
				pos+=78;
				ts(pos);

			}
		}
	}
	for(int i=0; i<108; i++)
		if (i%26==0)
			cout<<"\n"<<a[i]<<' ';
		else
			cout<<a[i]<<' ';

	return 0;
}


