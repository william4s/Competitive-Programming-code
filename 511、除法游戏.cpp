# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long  a , b , r , x , y;
	cin >> a >> b;
	x = a;
	y = b;
	while (a % b != 0)
	{
		r = a % b;
		a = b ;
		b = r ;
	}
	if (x % (y / r) == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
