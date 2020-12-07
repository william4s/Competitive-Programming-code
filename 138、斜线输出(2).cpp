#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
	int n,t=1;
  	cin>>n;
  	for(int i=0;i<n;i++)
 	 {
    for(int j=0;j<n;j++)
 	    {
    	  cin>>a[i][j];
  	 	}
 	 }
  	int i,j;
  	while(t<=n*n)
  	{
    for(int k=0;k<n;k++)
    {
      i=0;
      j=k;
      for(;i<n&&j>=0;i++,j--)
      {
        cout<<a[i][j]<<" ";
        t++;
      }
    }
    for(int k=1;k<n;k++)
    {
      i=k;
      j=n-1;
      for(;i<n&&j<n;i++,j--)
      {
        cout<<a[i][j]<<" ";
        t++;
      }
    }
  }
  return 0;
}
