#include <bits/stdc++.h>
using namespace std;
int main() {
	char a[10005];
	int n = 0, m = 0, p = 0;
	gets(a);
	int len = strlen(a);
	for(int i = 0; i < len; i ++) {
		if(isupper(a[i])) n ++;
		if(islower(a[i])) m ++;
		if(isdigit(a[i])) p ++;
	}
	cout << n << ' ' << m << ' ' << p << endl;
	return 0;
}
