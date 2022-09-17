#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

int mex(vector<int> v){
	sort(v.begin(), v.end());
	int t = 0;
	for(int i = 0; i < v.size(); i++){
		if(t < v[i]){
			return t;
		}else{
			t = v[i]+1;
		}
	}
	return t;
}

int grundy(int h){
	vector<int> group;
	for(int y = 2; y <= h; y++){
		if(h%y == 0){
			int z = h/y;
			if(y%2 == 0){
				group.push_back(0);
			}else{
				group.push_back(grundy(z));
			}
		}
	}
	int ad = mex(group);
	debug(ad);
	return ad;
}

void solve(){
	int n;
	cin >> n;
	vector<int> h(n);
	for(auto &x: h) cin >> x;
	int g = 0;
	for(int t: h) g ^= grundy(t);
	cout << (g ? 1 : 2) << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
