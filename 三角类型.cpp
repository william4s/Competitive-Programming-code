#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b && a!=c && b!=c || b==c && b!=a && c!=a || a==c && a!=b && c!=b)
		cout<<"1";
	else if(a==b && b==c && a==c)
		cout<<"2";
	else if(a!=b && a!=c && b!=c && (a+b>=c && a+c>=b && b+c>=a))
		cout<<"3";
	else if(a+b<=c || a+c<=b || b+c<=a)
		cout<<"error";
	return 0;
}
