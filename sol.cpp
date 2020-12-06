#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int tmp1 = n;
	int tmp2 = n;
	int cnt1 = 0;
	int cnt2 = 0;
	while (tmp1 % 5 != 0 || tmp1 % 10 != 0) {
		tmp1--;
		cnt1++;
	}
	while (tmp2 % 5 != 0 || tmp2 % 10 != 0) {
		tmp2++;
		cnt2++;
	}
	if (cnt1 <= cnt2) {
		cout << n - cnt1;
	} else {
		cout << n + cnt2;
	}
	cout << '\n';
	return 0;
}
