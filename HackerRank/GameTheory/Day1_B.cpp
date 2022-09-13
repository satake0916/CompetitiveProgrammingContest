#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve(){
	int n,m;
	cin >> n >> m;
	if(m == 1){
		cout << 2 << endl;
		return;
	}
	if(n & 1){
		cout << 1 << endl;
	}else{
		cout << 2 << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
