#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
map<string,string> a;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll k,cnt=0;
	cin>>k;
	a["ChuiZi"]="Bu";
	a["JianDao"]="ChuiZi";
	a["Bu"]="JianDao";
	string s;
	while(cin>>s)
	{
		if (s=="End")
			break;
		if (cnt==k)
		{
			cout<<s<<endl;
			cnt=0;
		}
		else
		{
			cout<<a[s]<<endl;
			cnt++;
		}
		
	}
	
	
	return 0;
}



