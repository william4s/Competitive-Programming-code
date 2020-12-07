#include <bits/stdc++.h>
using namespace std;
int main() {
	char a[50];
	gets(a);
	int len = strlen(a);
	for(int i = 0; i < len; i++) {
		if(isdigit(a[i])) cout << i + 1 << ' '; 
	}
	cout << '\b' << endl;
	return 0;
}
