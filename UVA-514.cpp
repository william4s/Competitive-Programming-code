#include<bits/stdc++.h>
using namespace std;
int n, a[1010];
int main()
{
	while (cin >>n && n != 0)
	{
		while (cin >>a[1] && a[1] != 0)
		{
			for(int i=2; i<=n; i++)	cin>>a[i];
			bool pd=1;
			stack<int> s;
			int A=1,B=1;
			while(B<=n)
			{
				if(A==a[B])
				{
					A++;
					B++;
				}
				else if(!s.empty()&&s.top()==a[B])
				{
					s.pop();
					B++;
				}
				else if(A<=n)
				{
					s.push(A++);
				}
				else
				{
					pd=0;
					break;
				}

			}
			if(pd)	cout<<"Yes"<<endl;
			else	cout<<"No"<<endl;
		}
		puts(""); // 两组间空行
	}
	return 0;
}
