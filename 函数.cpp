#include<iostream>
using namespace std;
int n;
int p(int i)
{
	if (i<n) cout<<"sin("<<i<<"+";
	else cout<<"sin("<<i;
	i++;
    if (i>n) 
	{
		cout<<")";
		return 0;
    }
	p(i);
	cout<<")";
	
}
int main(){
	
	cin>>n;
	p(1);
	return 0;
}
