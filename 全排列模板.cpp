#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{

	cin>>s;

	do
	{
		cout<<s<<' ';
	}
	while(next_permutation(s.begin(),s.end()));
	cout<<"1/sum\n";

	return 0;
}
