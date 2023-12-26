#include<bits/stdc++.h>
using namespace std;

//sinh tap con ke tiep
/*
	5 3
	1 4 5
	out:
	2 3 4
*/

int n,k,a[1005];

void next(){
	int i = k;
	while(i >= 0 and a[i] == n-k+i){
		--i;
	}
	if(i == 0){ //neu la cau hinh cuoi cung
		//in ra cau hinh dau tien
		for(int i = 1 ; i <= k ; i++) {
			cout << i << " ";
		}
	}
	else {
		a[i]++;
		for(int j = i+1 ; j <= k ; j++){
			a[j] = a[j-1]  + 1;
		}
		for(int i = 1 ; i <= k ; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1 ; i <= k ; i++) cin >> a[i];
		next();
	}
}