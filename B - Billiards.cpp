#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
double a,b,c,d,k;
int main(){

	cin>>a>>b>>c>>d;
	d=-d;
	k=(b-d)*1.0/(a-c);
	printf("%.6lf",(-b*1.0/k+a));
	
	return 0;
}



