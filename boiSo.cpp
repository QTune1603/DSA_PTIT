#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll a[505]; //luu boi cac so tu 1 den 500
vector<ll> res;
int ok ;

void next(string &s){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1){
		ok = 0;
	}
	else {
		s[i] = '9';
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string s(13, '0'); //xau co do dai 13 ki tu 
	ok = 1;
	next(s); //bo qua xau dau tien 0000... vi xau nay luon chia het
	while(ok){
		res.push_back(stoll(s)); //chuyen sang dang so
		next(s);
	}
	//duyet qua tung 500 so dau tien va ktra boi tung so
	//sinh ra 500 boi cua 500 so dau tien
	for(int i = 1 ; i <= 500 ; i++){
		for(ll x : res){
			if(a[i] == 0 && x % i == 0){
				a[i] = x;
			}
		}
	}
//	int cnt = 0; //dem xem co bao nhieu boi cua 1 ==> 500 so dau tien
//	for(int i = 1 ;  i<= 500 ; i++){
//		cout << a[i << endl;
//		if(a[i] != 0){
//			cnt++; // cnt = 500 la ok
//		}
//	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}