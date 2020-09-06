#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int ans = 0, cur = 0;
	cur = 2 * n;
	ans += (cur + k - 1) / k;
	cur = 5 * n;
	ans += (cur + k - 1) / k;
	cur = 8 * n;
	ans += (cur + k - 1) / k;
	cout << ans << '\n';
	return 0;
}
