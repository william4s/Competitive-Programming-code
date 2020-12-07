#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k;
	cin>>s>>k;
	s+=s.substr(0,k);
	s.erase(0,k);
	cout<<s;

	
	
	return 0;
}
