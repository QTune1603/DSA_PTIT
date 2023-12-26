#include<bits/stdc++.h>
using namespace std;

long long powMod(long long a, int b){
	long long res = 1;
	while(b){
		if(b%2==1){
			res *= a;
			res %= (int)(1e9+7);
		}
		a *= a;
		a %= (int)(1e9+7);
		b /= 2;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	cout << powMod(2,n);
}
