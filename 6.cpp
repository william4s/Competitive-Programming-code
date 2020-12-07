#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	int sum=0,pos,ss=0;
	bool pd=0;
	while(getline(cin,s))
	{
		if (s==".")
			break;
		sum++;
		int len=s.size();
		if (s.find("chi1 huo3 guo1")<len)
		{
			if (pd==0)
				pos=sum,pd=1,ss++;
			else
				ss++;
		}
	}
	cout<<sum<<endl;
	if (pd)
		cout<<pos<<' '<<ss<<endl;
	else
		cout<<"-_-#\n";


		    return 0;
}
