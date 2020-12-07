#include<bits/stdc++.h>
using namespace std;
string s="abacaba";
int find(string w)
{
	int flag=1;
	int cnt=0;
	for (int i=0;i<=w.size()-7;i++)
		{
			for (int j=0;j<7;j++)
			{
				if (w[i+j]!=s[i])
				{
					flag=0;
					break;
				}
			}
			if (flag) cnt++;
		}
	return cnt;
	
	
}

int main(){
	long t,len;
	string w;
	cin>>t;
	while(t--)
	{
		cin>>len;
		cin>>w;
		int cnt;
		cnt=find(w);
		if (cnt==1)
		{
			cout<<"Yes"<<endl;
			for (int i=0;i<len;i++)
				if (w[i]!='?')	cout<<w[i];
				else cout<<'z';
			cout<<endl;
		    continue;
		} 
		
		
	}
		if (pd==1&&re==1)
			{
				cout<<"Yes"<<endl;
				for (int li=0;li<end-7;li++)	cout<<w[li];
				cout<<s;
				for (int li=end+1;li<len;li++)	cout<<w[li];
				cout<<endl;
				// cout<<"re:"<<re;
			}
		else if (pd==0||re>1)
			cout<<"No"<<endl;
	}
	
	
	return 0;
}
