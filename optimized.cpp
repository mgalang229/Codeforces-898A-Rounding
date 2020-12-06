#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a = (n / 10) * 10;
	int b = a + 10;
	if (n - a > b - n) {
		cout << b;
	} else {
		cout << a;
	}
	cout << '\n';
	return 0;
}
