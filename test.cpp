#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
int main(){
	string s;
	cin>>s;
	mp["A"]=10;
	if (mp[s])
		cout<<mp[s];
	else
		cout<<0;
	return 0;
}
