#include<bits/stdc++.h>
using namespace std;
int q[30],w[30];
int main()
{
	ios::sync_with_stdio(false);
	string s1,s2;
	while (cin>>s1>>s2)
	{
		long long a,b;
		memset(q,0,sizeof(q));
		memset(w,0,sizeof(w));
		a=s1.size()-1;
		b=s2.size()-1;
		for (long long i=0; i<s1.size(); i++)
			q[s1[i]-'a']++;
		for (long long i=0; i<s2.size(); i++)
			w[s2[i]-'a']++;
		bool pd=1;
		for (long long i=0; i<26; i++)
			if (q[i]!=w[i])
			{
				pd=0;
				break;
			}


		if (s1==s2)
			cout<<"Equal\n";
		else if (s1[0]==s2[0]&&s1[a]==s2[b]&&pd==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
