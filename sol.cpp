#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int tmp1=n, tmp2=n, cnt1=0, cnt2=0;
	while(tmp1%5!=0||tmp1%10!=0) {
		tmp1--;
		cnt1++;
	}
	while(tmp2%5!=0||tmp2%10!=0) {
		tmp2++;
		cnt2++;
	}
	cout << (cnt1<=cnt2?n-cnt1:n+cnt2) << "\n";
}
