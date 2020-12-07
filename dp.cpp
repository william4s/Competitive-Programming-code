#include<iostream>
#include<cstring>
using namespace std;
int value[100],bejin[100],end[100],prve[100],choose[100],n;
int main()
{
	int opt(int i);
	memset(choose,-1,sizeof(choose));
	memset(prve,-1,sizeof(prve));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>value[i]>>bejin[i]>>end[i];
/*		for(int j=0;j<i;j++) 
		{
			if(end[j]<=bejin[i])  //找出距离最近的前驱 
				choose[i]=max(choose[i],j);
		}			*/
	}
	for (int i=0;i<n;i++)
		for (int j=0;j<i;j++)
		{
			if (end[j]<=bejin[i])
				choose[i]=max(choose[i],j);
		}
	cout<<opt(n);
//	for (int i=0;i<n;i++) cout<<choose[i]<<endl;
	return 0;
}
int opt(int i)
{
//	if(i==-1)	return 0;
	if(prve[i]>=0)	{
	return prve[i];
    }  
	return prve[i]=max(opt(i-1),value[i]+opt(choose[i]));
}
/* 
输入数据为：
n行
每一个的价格 开始时间 结束时间

8
5 1 4
1 3 5
8 0 6
4 4 7
6 3 8
3 5 9
2 6 10
4 8 11

我的是完全根据图给的数据来做的，没有用up主计算得出的数据  */
