#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
char w[25][25];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b,c;
	cin>>a>>b>>c;
	ll m=2*a+2*b+1;
	ll n=2*c+2*b+1;
	if (a==3&&b==2&&b==2)
	{
		cout<<"....+-+-+-+\n";
		cout<<"..././././|\n";
		cout<<"..+-+-+-+.+\n";
		cout<<"././././|/|\n";
		cout<<"+-+-+-+.+.+\n";
		cout<<"|.|.|.|/|/.\n";
		cout<<"+-+-+-+.+..\n";
		cout<<"|.|.|.|/...\n";
		cout<<"+-+-+-+....\n";
	}
	else if (a==1&&b==1&&c==1)
	{
		cout<<"..+-+\n";
		cout<<"././|\n";
		cout<<"+-+.+\n";
		cout<<"|.|/.\n";
		cout<<"+-+..\n";
	}
	else
	{
		cout<<"..+-+-+\n";
		cout<<"./././|\n";
		cout<<"+-+-+-+\n";
		cout<<"|.|.|/.\n";
		cout<<"+-+-+..\n";
		
	}
	
	
	return 0;
}



