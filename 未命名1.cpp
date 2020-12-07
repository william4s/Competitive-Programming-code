#include <bits/stdc++.h>
using namespace std;
int main() {
	char a[105];
	gets(a);
	int len = strlen(a);
	for(int i = 0; i < len; i++) {
		if(islower(a[i])) a[i] = char(a[i] - 32);
	}
	cout << a << endl;
	return 0;
} 
