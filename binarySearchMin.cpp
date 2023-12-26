#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		ll sum = 0;
		int left = 0, res = 1e9;
		for(int r = 0 ; r < n ; r++){
			sum += a[r];
			while(sum > x){
				res = min(res,r-left+1);
				sum -= a[left];
				++left;
			}
		}
		if(res == 1e9) cout << -1 << endl;
		else cout << res << endl;
	}
	return 0;
}