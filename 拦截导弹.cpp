#include<bits/stdc++.h>
using namespace std;

int main(){
	int h[9999],i,j,n=0;  //dp[i]表示第i个时最长子序 
	int down[9999],up[9999];
	while(cin>>h[n++]);
	n--;
	for (i=0;i<n;i++)
		down[i]=up[i]=1;
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			if (h[j]<=h[i]) up[i]=max(up[i],up[j]+1);
			else down[i]=max(down[i],down[j]+1);
		}
	}
	int m_u=0,m_d=0;
	for (i=0;i<n;i++)
	{
		if (m_u<up[i]) m_u=up[i];
		if (m_d<down[i]) m_d=down[i];
//cout<<i<<" down:"<<down[i]<<' '<<"up:"<<up[i]<<endl;
	}
	cout<<m_d<<endl<<m_u;
	return 0;
}
