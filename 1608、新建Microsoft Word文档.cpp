#include<iostream>
using namespace std;
bool a[100010];
int main(){
	int n,pos,j=1;
	string t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if (t=="Delete")
		{
			cin>>pos;
			if (a[pos])	
				cout<<"Successful"<<endl;
			else
				cout<<"Failed"<<endl;
			a[pos]=0;
			j=min(pos,j);
		}
		else
		{
			while(a[j]) j++;
			a[j]=1;
			cout<<j<<endl;
		}
		
	}
	
	return 0;
}
