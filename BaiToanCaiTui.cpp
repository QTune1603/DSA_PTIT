#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n,s; cin >> n >> s;
		int v[n+1],w[n+1];
		for(int i = 1 ; i <= n ; i++) cin >> w[i];
		for(int i = 1 ; i <= n ; i++) cin >> v[i];
		int dp[n+1][s+1];
		int a[n+1] ;
		for(int i = 1 ; i <= n ; i++) a[i] = 0;
		memset(dp,0,sizeof(dp));
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= s ; j++){
				//Khong lua chon do vat thu i vao trong tui
				dp[i][j] = dp[i-1][j];
				//Co the dua do vat thu i vao trong tui
				if(j >= w[i]){
					dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
					a[i] = 1;
				}
			}
		}
		cout << fixed << setprecision(1) << (float)dp[n][s] << endl;	
		for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
	}
}