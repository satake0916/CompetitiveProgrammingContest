#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve(){
	int n;
	cin >> n;
	int g = 0;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		if(t&1) g ^= i;
	}

	cout << (g ? "First" : "Second") << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
