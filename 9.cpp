#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int n;
int s1[N];
char s2[N];
int main(){
	int hh=0,tt=-1;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>s1[i];
	for (int i=0;i<n-1;i++)	
		cin>>s2[i];
	tt=n-1;
	for (int i=n-2;i>=0;i--) //n2 op n1
	{
		int n1=s1[tt--];
		int n2=s1[tt--];
		int res=0;
		if (s2[i]=='+')
			res=n1+n2;
		else if (s2[i]=='-')
			res=n2-n1;
		else if (s2[i]=='*')
			res=n2*n1;
		else
		{
			if (n1==0)
			{
				cout<<"ERROR: "<<n2<<"/0\n";
				return 0;
			}
			else
				res=n2/n1;
		}
		//cout<<res<<endl;
		s1[++tt]=res;
	}
	cout<<s1[tt]<<endl;
	return 0;
}
