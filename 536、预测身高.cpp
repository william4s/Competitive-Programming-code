#include<bits/stdc++.h>
using namespace std;

int main(){
	long a,b;
	char s,sp;
	double ans=0;
	cin>>a>>b>>s>>sp;
	if (s=='m') ans=(a+b)*1.08/2;
	else ans=(a+0.948*b)/2;
	
	if (sp=='y') ans*=1.02;
	cout<<floor(ans); 
	return 0;
}
