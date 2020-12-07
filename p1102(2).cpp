#include <iostream>
#define LL long long            //要开龙龙哦
using namespace std;
const int bigPrimeNum = 277777;           //选的哈希数，是个大素数
LL arr1[300000],arr2[300000],Hash[bigPrimeNum + 10];
int Max = 300000;
int sum[bigPrimeNum + 10];
void Insert(LL num)        //插入，套模板
{
	int tmp = num % bigPrimeNum;             //取模
	while (Hash[tmp] != Max && Hash[tmp] != num)
	{
		tmp++;
		if(tmp > bigPrimeNum)
			tmp = 0;
	}
	Hash[tmp] = num;
	sum[tmp]++;
}
int Find(LL num)                //找，有没有发现和插入差不多
{
	int tmp = num % bigPrimeNum;
	while (Hash[tmp] != Max && Hash[tmp] != num)
	{
		tmp++;
		if(tmp > bigPrimeNum)
			tmp = 0;
	}
	return sum[tmp];          //注意此处，如果有，就返回TRUE，没有就返回0
}
int main()
{
	int n;
	LL c;
	for (int k = 0; k < bigPrimeNum + 10; ++k)
	{
		Hash[k] = Max;
	}
	cin >> n >> c;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
		arr2[i] = arr1[i] + c;
		Insert(arr2[i]);        //插入。。。
	}
	int ans = 0;
	for (int j = 0; j < n; ++j)
	{
		ans += Find(arr1[j]);            //计算，如果没有就+0。
	}
	cout << ans << endl;
	return 0;
}
