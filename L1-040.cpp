#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
/*	ios::sync_with_stdio(false);
    cin.tie(0);
  */  cout.tie(0);
	int n;
	double t;
	scanf("%d",&n);
	getchar();
	for (int i=0;i<n;i++)
	{
		char x;
		scanf("%c%lf",&x,&t);
		getchar();
		if (x=='M')
			printf("%.2lf\n",t/1.09);
		else
			printf("%.2lf\n",t*1.09);
	
	}
	return 0;
}



