#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll sum=1;
string s="";

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll l,n;
	cin>>l>>n;
	for (ll i=0;i<l;i++)
		sum*=26;
	ll ch=sum-n;
	while(ch)
	{
		s=char(ch%26+'a')+s;
		ch/=26;
	   }   
	for (ll i=0;i<l-s.size();i++)
		cout<<"a";
	cout<<s<<endl;

				
	return 0;
}



