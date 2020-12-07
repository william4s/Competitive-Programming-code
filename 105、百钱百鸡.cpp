#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=100/5;i++)
		for (int j=1;j<=100/3+1;j++)
		{
			int k=100-i-j;
			if (k%3==0&&5*i+j*3+k/3==100)
			cout<<i<<' '<<j<<' '<<k<<endl;
		}

	return 0;
}

