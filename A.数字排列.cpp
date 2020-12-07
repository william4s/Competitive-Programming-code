#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,ans="-1";
    sort(s1.begin(),s1.end());
    string t=s1;
	cin>>s1>>s2;
	do
	{
		if (s1<=s2)
			ans=s1;
	}
	while(next_permutation(s1.begin(),s1.end()));
	if (ans=="-1"||ans==t)
		cout<<"-1";
	else
		cout<<ans;
	
	return 0;
}


