#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> manacher(const string &s){
	vector<int> radius(s.size());
	int i = 0, j = 0;
	while(i < s.size()){
		while(i-j >= 0 && i+j < s.size() && s[i-j] == s[i+j]) j++;
		radius[i] = j;
		int k = 1;
		while(i-k >= 0 && i+k < s.size() && k + radius[i-k] < j){
			radius[i+k] = radius[i-k];
			k++;
		}
		i += k;
		j -= k;
	}
	return radius;
}

void solve() {
	int n;
	cin >> n;
	string p;
	cin >> p;

	string s = "";
	for(int i = 0; i < n; i++){
		s += p[i];
		if(i != n-1) s += "$";
	}

	int m = s.size();

	auto v = manacher(s);

	/*
	for(int i = 0; i < m; i++){
		cout << " " << v[i];
	}
	cout << endl;
	*/

	for(int i = 0; i < v.size(); i++){
		bool f = false;
		if(i + 1 -v[i] != 0) continue;
		int head = i + v[i];
		if(head == v.size()){
			f = true;
		}
		int siten = (head+1 + v.size()-1) / 2;
		if(siten + v[siten] == v.size()){
			f = true;
		}

		if(f){
			for(int j = 0; j < head; j++){
				if(s[j] != '$') cout << s[j];
			}
			cout << endl;
			return;
		}
	}
}

int main() {
  int T;
  cin >> T;
  for (int test_no = 1; test_no <= T; test_no++) {
    cout << "Case #" << test_no << ": ";
    solve();
  }
}

