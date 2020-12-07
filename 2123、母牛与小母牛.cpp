#include<iostream>
using namespace std;
long long a[110]={0,1,2,3,4};
int main(){
	for (int i=5;i<=100;i++)
		a[i]=a[i-1]+a[i-3];
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
		
	}
	return 0;
}
