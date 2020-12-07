#include<bits/stdc++.h>
using namespace std;
char maps[1030][1030];

void dg(int k)
{
	if (k>10)
		return ;
	int num=1,num1=1;
	for (int i=0; i<k; i++)
		num1*=2;
	num=num1/2;

	for (int i=1; i<=num; i++) //срио
		for(int j=num+1; j<=num1; j++)
		{
			maps[i][j]=maps[i][j-num];
		}

	for (int i=num+1; i<=num1; i++) //вСоб
		for(int j=1; j<=num; j++)
		{
			if (maps[i-num][j]=='C')
				maps[i][j]='P';
			else
				maps[i][j]='C';
		}
	for (int i=num+1; i<=num1; i++) //сроб
		for(int j=num+1; j<=num1; j++)
		{
			maps[i][j]=maps[i-num][j-num];
		}
	dg(k+1);
}
int main()  //C is 1,p is 0;
{
	maps[1][1]='C';
	maps[1][2]='C';
	maps[2][1]='P';
	maps[2][2]='C';
	int T,k;
	dg(2);
	cin>>T;
	while(T--)
	{
		cin>>k;
		int t=1;
		for(int i=0; i<k; i++)
			t*=2;
		for (int i=1; i<=t; i++)
		{

			for(int j=1; j<=t; j++)
				cout<<maps[i][j];
			cout<<"\n";
		}

	}
	return 0;
}

