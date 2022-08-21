#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> r(n), rr(n);
	for(int i = 0; i < n; i++){
		cin >> r[i];
		rr[i] = r[i];
	}

	sort(rr.begin(), rr.end());
	for(int i = 0; i < n; i++){
		auto it = lower_bound(rr.begin(), rr.end(), 2 * r[i] + 1);
		advance(it, -1);
		if(*it == r[i]) advance(it, -1);
		if(it == prev(rr.begin())) cout << -1 << " ";
		else cout << *it << " ";
	}
	cout << endl;
}

int main() {
  int T;
  cin >> T;
  for (int test_no = 1; test_no <= T; test_no++) {
    cout << "Case #" << test_no << ": ";
    solve();
  }
}
