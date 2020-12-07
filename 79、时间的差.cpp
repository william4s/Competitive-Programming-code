#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1,h2,m1,m2,s1,s2;
	cin>>h1>>m1>>s1;
	cin>>h2>>m2>>s2;
	if (h1<h2)
		cout<<(3600*(h1+12-h2)+60*(m1-m2)+s1-s2);
	else
		cout<<(3600*(h1-h2)+60*(m1-m2)+s1-s2);
	
	return 0;
}
