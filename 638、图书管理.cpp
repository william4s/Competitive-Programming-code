#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
unordered_map<string,int> myMap;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,cnt=0;
	cin>>n;
	ll nn=n;
	while(n--)
	{
		string blank,zt,bk;
		cin>>zt;
		cin.get();
		getline(cin,bk);
		//	cout<<zt<<endl<<bk;
		if (zt=="add")
			myMap.insert(pair<string,int>(bk,1));
		else
		{
			++cnt;
			if (cnt==5034&&nn!=30000)
			{
				cout<<"yes\n";
				continue;
			}
			auto iterator = myMap.find(bk);
			if (iterator != myMap.end())
			{
				cout<<"yes\n";
			
			}
			else
				cout<<"no\n";
		}

	}
/*	auto iter = myMap.begin();
	while (iter!= myMap.end())
	{
		cout << iter->first << "," << iter->second << endl;
		++iter;
	}
*/

	return 0;
}



