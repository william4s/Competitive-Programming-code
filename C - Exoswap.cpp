#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+10;
struct stu
{
	ll x,i;
}b[N];
ll a[N]; 
string zh(ll t)
{
	string ans="";
	while(t)
	{
		ans=char(t%10+'0')+s;
		t/=10;
	}
	return ans;
}
bool cmp(stu a,stu b)
{
	return a.x<b.x;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i].x=a[i];
		b[i].i=i;
	}
	sort(b+1,b+1+n,cmp);
	
	
	
	return 0;
}



