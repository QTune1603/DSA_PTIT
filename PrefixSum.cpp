#include<iostream>
using namespace std;
#define ll long long

//M?ng c?ng d?n , t?ng ti?n t? 

int main(){
	int n,q; cin >> n;
	ll a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	ll prefix[n];
	for(int i = 0 ; i < n ; i++){
		if(i==0) prefix[0] = a[0];
		else prefix[i] = prefix[i-1] + a[i];
	}
	cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		--l; --r; //do duyet tu 0 -> <n
		if(l==0) cout << prefix[r] << endl; //0-1 sai
		else cout << prefix[r] - prefix[l-1] << endl;
	}
}