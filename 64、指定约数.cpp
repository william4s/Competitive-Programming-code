#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if (n%3==0) cout<<3<<' ';
	if (n%5==0) cout<<5<<' ';
	if (n%7==0) cout<<7<<' ';
	if (n%3&&n%5&&n%7) cout<<n;
	
	
	return 0;
}
