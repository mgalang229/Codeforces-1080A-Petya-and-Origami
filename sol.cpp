#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int r = 2 * n;
	int g = 5 * n;
	int b = 8 * n;
	int tmp = 0, cnt = 1;
	while  (tmp < r) {
		tmp += k;
		cnt++;
	}
	tmp = 0;
	while  (tmp < g) {
		tmp += k;
		cnt++;
	}
	tmp = 0;
	while  (tmp < b) {
		tmp += k;
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
