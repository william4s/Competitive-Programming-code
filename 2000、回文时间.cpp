#include<bits/stdc++.h>
using namespace std;
string a[30]={"00:00","01:10","02:20","03:30","04:40","05:50","10:01","11:11","12:21","13:31","14:41","15:51","20:02","21:12","22:22","23:32","24:00"};
int main()
{
	string s,s1,s2,c;
	cin>>s;
	s2=s;
	reverse(s2.begin(),s2.end());
	if(s2==s)
	{
		cout<<0;
		return 0;
	}
	long hor=0,mint=0;

	for(int i=0;i<=23;i++)
	{
		if(s>a[i]&&s<a[i+1])
		{
			hor=(a[i+1][0]-s[0])*10+(a[i+1][1]-s[1]);
			mint=(a[i+1][3]-s[3])*10+(a[i+1][4]-s[4])+hor*60;
			cout<<mint;//<<' '<<a[i+1]<<' ';//<<hor<<' '<<mint;
			return 0;
		}
	}
	
	return 0;
}

