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
	bool f = true;
	int g = 0;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		if(t > 1) f = false;
		g ^= t;
	}
	bool h = g > 0;
	if((f && h) || (!f && !h )) cout << "Second" << endl;
	else cout << "First" << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
