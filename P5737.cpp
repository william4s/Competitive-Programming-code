#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[3000],x,y,i,ans,ct=0;
	cin>>x>>y;
	for (i=x;i<=y;i++)
	{
		if (i%4==0&&i%100!=0||i%400==0) {
			a[ct++]=i;
		}
	}
	cout<<ct<<endl;
	for (i=0;i<ct;i++) cout<<a[i]<<' ';
	return 0;
}
