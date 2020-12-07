#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;
#define LL long long
const int MAXN = 100 + 10;
int n;
LL a[MAXN],b[MAXN];

LL fun(LL a,LL b)
{
	LL z;
	while(b)
	{
		z = a % b;
		a = b;
		b = z;
	}
	return a;
}

int main()
{
	scanf("%d",&n);
	for(int i = 0; i < n; ++i)
		scanf("%lld/%lld",&a[i],&b[i]);
	LL x = a[0],y = b[0],z,p;
	for(int i = 1; i < n; ++i)
	{
		z = fun(y,b[i]);
		p = y * b[i] / z;
		x = x * (p / y) + a[i] * (p / b[i]);
		y = p;
		z = fun(x,y);
		x = x / z;
		y = y / z;
	}
	LL w = x / y;
	x = x % y;
	if(y < 0)
	{
		x = -x;
		y = -y;
	}
	if(!x)
		printf("%lld\n",w);
	else if(!w)
		printf("%lld/%lld\n",x,y);
	else
	{
		if(w < 0)
		{
			w = -w;
			if(x > 0)
				x = -x;
		}
		printf("%lld %lld/%lld\n",w,x,y);
	}
	return 0;
}
