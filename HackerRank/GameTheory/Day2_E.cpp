#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

int frac(int x){
	int cnt = 0;
	for(int i = 2; i*i <= x; i++){
		if(x % i == 0){
			while(x%i == 0){
				x /= i;
				cnt++;
			}
		}
	}
	if(x != 1) cnt++;
	return cnt;
}

void solve(){
	int n;
	cin >> n;
	int g = 0;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		g ^= frac(t);
	}

	cout << (g ? 1 : 2) << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
