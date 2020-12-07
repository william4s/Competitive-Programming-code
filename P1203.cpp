#include<bits/stdc++.h>
using namespace std;
int n,ans=-1;
string str;
int sl(int pos){
	int count=2,r=pos;
	for (;((r+1)%n!=pos)&&str[r%n]=='w';r++,count++);
	for (int i=1;i<n&&(str[r%n]==str[(r+i)%n]||str[(r+i)%n]=='w');i++,count++);
	for (int i=2;i<n&&(str[(pos-1+n)%n]==str[(pos-i+n)%n]||str[(pos-i+n)%n]=='w');i++,count++);
	if (count>n) return n;
	else return count;
} 
int main(){
	cin>>n>>str;
	for (int i=0;i<n;i++)
		if (str[(i-1+n)%n]!=str[i]&&str[(i-1+n)%n]!='w')
			{
			ans=max(ans,sl(i));

			 }
	cout<<(ans==-1?n:ans);
	return 0;
}
