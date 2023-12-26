#include<bits/stdc++.h>
using namespace std;

/*
su dung cong thuc:
(a*b)%c = [(a%c)*(b%c)] % c
*/

//y <= 10^6 thi ok
int powMod1(int x, int y, int m){
	long long res = 1;
	for(int i = 1 ; i <= y ; i++){
		res *= x;
		res %= m;
	}
	return res;
}

//y >= 10^9
//luy thua nhi phan
int powMod2(int x, int y, int m){
	long long res = 1;
	while(y){
		if(y%2==1){
			res *= x;
			res %= m;
		}
		x *= x;
		x %= m;
		y /= 2;
	}
	return res;
}

//de quy luy thua nhi phan
int powMod3(int x, int y, int m){
	if(y==0) return 1;
	int tmp = powMod3(x,y/2,m);
	if(y%2==1){
		return (x%m*((tmp%m)*(tmp%m)%m))%m;
	}
	else return (tmp%m)*(tmp%m)%m;
}

int main(){
	int t; cin >> t;
	while(t--){
		int x,y,p;
		cin >> x >> y >> p;
		cout << powMod1(x,y,p) << endl;
//		cout << powMod2(x,y,p) << endl;
//		cout << powMod3(x,y,p) << endl;
	}
}
