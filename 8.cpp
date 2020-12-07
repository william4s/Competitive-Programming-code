#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int i,j;
} b[10];
int a[5][5];
bool st[15];
int q[50],sum;
void c1(int op)
{
	
	for (int j=1;j<=3;j++)
		sum+=a[op][j];
	cout<<q[sum]<<endl;
}
void c2(int op)
{
	op-=3; 
	for (int i=1;i<=3;i++)
		sum+=a[i][op];
	cout<<q[sum]<<endl;
}
void c3(int op)
{
	for (int i=1;i<=3;i++)
		sum+=a[i][i];
	cout<<q[sum]<<endl;
}
void c4(int op)
{
	for (int i=1;i<=3;i++)
		sum+=a[i][3-i+1];
	cout<<q[sum]<<endl;
}
int main()
{
	q[6]=10000;
	q[7]=36;
	q[8]=720;
	q[16]=72;
	q[17]=180;
	q[18]=119;
	q[9]=360;
	q[19]=36;
	q[10]=80;
	q[20]=306;
	q[11]=252;
	q[21]=1080;
	q[12]=108;
	q[22]=144;
	q[13]=72;
	q[23]=1800;
	q[14]=54;
	q[24]=3600;
	q[15]=180;
	int stx,sty,stnum,op;
	for (int i=1; i<=3; i++)
		for (int j=1; j<=3; j++)
		{
			cin>>a[i][j];
			st[a[i][j]]=1;
			if (a[i][j]==0)
				stx=i,sty=j;
		}
	for (int i=0; i<3; i++)
		cin>>b[i].i>>b[i].j;
	cin>>op;
	for (int i=1; i<=9; i++)
		if (st[i]==0)
		{
			stnum=i;
			a[stx][sty]=i;
		}
	for (int i=0; i<3; i++)
		cout<<a[b[i].i][b[i].j]<<endl;
	
	if (op>=1&&op<=3)
	{
		c1(op);
	}
	else if (op>=4&&op<=6)
	{
		c2(op);
	}
	else if (op==7)
		c3(op);
	else
		c4(op);
	return 0;
}
