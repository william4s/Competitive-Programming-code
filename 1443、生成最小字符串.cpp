#include<iostream>
using namespace std;
char s[30010];
int main(){
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>s[i];
	int i=0,j=n-1,front,back;
	int cnt=1;
	while(i<=j)
	{
		front=i;
		back=j;
		while(s[front]==s[back])
		{
			front++;
			back--;
		}
		if (s[front]>s[back])
			cout<<s[j--];
		else
			cout<<s[i++];
		if (cnt++%80==0)
			cout<<endl;
	}

	return 0;
}
