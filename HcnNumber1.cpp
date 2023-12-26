#include<bits/stdc++.h>
using namespace std;
#define l long long

/*
Tim hinh chu nhat lon nhat bao gom toan cac so 1
	0 1 1 0
	1 1 1 1
	1 1 1 1
	1 1 0 0
	out:
	1 1 1 1
	1 1 1 1
	max = 8
*/

int n,m, a[505][505];

int maxArea(int x[]){
	int res = 0;
	int i = 0;
	stack<int> st;
	while(i < m){
		if(st.empty() || x[i] >= x[st.top()]) {
			st.push(i++);
		}
		else {
			int top = st.top();
			st.pop();
			if(st.empty()){
				res = max(res, i * x[top]);
			}
			else {
				res = max(res, x[top] * (i - st.top() - 1));
			}
		}
	}
	while( !st.empty()){
		int top = st.top();
		st.pop();
		if(st.empty()){
			res = max(res, i*x[top]);
		}
		else {
			res = max(res , x[top] * (i - st.top() - 1));
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> a[i][j];
			}
		}
		int tmp[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if(i == 0) tmp[i][j] = a[i][j];
				else if(a[i][j]){
					tmp[i][j] = tmp[i-1][j] + 1;
				}
				else tmp[i][j] = 0;
			}
		}
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			ans = max(ans, maxArea(tmp[i]));
		}
		cout << ans << endl;
	}
}