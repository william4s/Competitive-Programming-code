#include<bits/stdc++.h>
using namespace std;
int dg(int n)
{
	if (n!=1) return (n*dg(n-1));
	else return 1;
}
int main(){
	int n,ans;
	cin>>n;
	cout<<dg(n);	
	
	return 0;
} 
