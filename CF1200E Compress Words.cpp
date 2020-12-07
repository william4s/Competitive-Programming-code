#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+10;
int ne[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		s+=str;
	}
	int len=s.size();
	for (int i=1,j=0;i<len;i++)
	{
		while(j&&s[i]!=s[j]) j=ne[j-1];
		if (s[i]==s[j]) j++;
		ne[i]=j;
	}
	
	
	return 0;
}



