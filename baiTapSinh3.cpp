#include<bits/stdc++.h>
using namespace std;

//sinh tap con ke tiep
/*
	5 3
	1 4 5
	out:
	2 3 4
*/

int n,a[1005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		if(next_permutation(a,a+n)){
			for(int i = 0 ; i < n ; i++){
				cout << a[i] << " ";
			}
		}
		else{
			for(int i = 0 ; i < n ; i++){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}