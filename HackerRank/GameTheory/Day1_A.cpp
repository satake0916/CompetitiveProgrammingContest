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
	int win[n+1];
	win[0] = win[1] = -1;
	win[2] = win[3] = win[4] = 1;
	for(int i = 5; i <= n; i++){
		if(win[i-2] == 1 && win[i-3] == 1 && win[i-5] == 1){
			win[i] = -1;
		}else{
			win[i] = 1;
		}
	}
	if(win[n] == 1) cout << "First" << endl;
	else cout << "Second" << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
