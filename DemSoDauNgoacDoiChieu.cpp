#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for(int i = 1 ; i <= t ; i++){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> a[i][j];
			}
		}
		int res = -1e9,hang,cot;
		for(int i = 0 ; i < n ; i++){
			int sum = 0;
			for(int j = 0 ; j < m ; j++){
				sum += a[i][j];
			}
			if(sum > res){
				res = sum;
				hang = i;
			}
		}
		res = -1e9;
		for(int i = 0 ; i < m ; i++){
			int sum = 0;
			for(int j = 0 ; j < n ; j++){
				if(j != hang) {
					sum += a[j][i];
				}
			}
			if(sum > res){
				res = sum;
				cot = i;
			}
		}
		cout << "#TC " << i << ":" << endl;
		for(int i = 0 ; i < n ; i++){
			if(i != hang){
				for(int j = 0 ; j < m ; j++){
					if(j != cot){
						cout << a[i][j] << " ";
					}
				}
				cout << endl;
		
			}
		} 
	}
}