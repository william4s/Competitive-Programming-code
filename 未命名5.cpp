#include <bits/stdc++.h>
using namespace std;
int main() {
	char a[50];
	char o, O;
	cin >> a >> o >> O;
	int len = strlen(a);
	for(int i = 0; i < len; i++) {
		if(a[i] == o) a[i] = O; 
	}
	cout << a << endl;
	return 0;
}
