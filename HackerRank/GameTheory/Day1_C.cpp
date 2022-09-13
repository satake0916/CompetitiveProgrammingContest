#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve(){
	int x,y;
	cin >> x >> y;
	x--, y--;
	const int dx[4] = {-2, -2, 1, -1};
	const int dy[4] = {1, -1, -2, -2};
	int area[15][15];
	area[0][0] = area[1][0] = area[0][1] = area[1][1] = 0;
	area[0][2] = area[2][0] = 1;
	for(int i = 3; i <= 28; i++){
		int sx = max(0, i - 14);
		int sy = i - sx;
		int tx = sy;
		int ty = sx;
		for(int xx = sx; xx <= tx; xx++){
			int yy = i - xx;
		bool win = false;
		for(int j = 0; j < 4; j++){
			int nx = xx + dx[j];
			int ny = yy + dy[j];
			if(0 <= nx && 0 <= ny && nx <= 14 && ny <= 14){
				if(area[nx][ny] == 0) win = true;
			}
		}
		if(win) area[xx][yy] = 1;
		else area[xx][yy] = 0;
		}
	}

	debug(area);

	cout << (area[x][y] ? "First" : "Second") << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
}
