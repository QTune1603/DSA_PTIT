#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7

//Hinh chu nhat con co tong lon nhat

int kadane(int a[], int n){
	int cnt = 0;
	int max_end_here = 0, res = 0;
	for(int i = 0 ; i < n ; i++){
		max_end_here += a[i];
		res = max(max_end_here,res);
		max_end_here = max(0,max_end_here);
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cin >> a[i][j];
		}
		int res = -1e9;
		int tmp[n]; //luu tong cac phan tu tren cac dong
		for(int l = 0; l < m ; l++){
			memset(tmp,0,sizeof(tmp));
			for(int r = l ; r < m ; r++){
				for(int i = 0 ; i < n ; i++){
					tmp[i] += a[i][r]; 
				}
				res = max(res, kadane(tmp,n));
			}
		}
		cout << res << endl;
	}
}