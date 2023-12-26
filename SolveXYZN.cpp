#include<bits/stdc++.h>
using namespace std;

//cach lam lau
long long solve(int x,int y,int z,int n){
	for(int i = pow(10,n-1)  ; i < pow(10,n) ; i++){
		if(i%x==0 && i%y==0 && i%z==0){
			return i;
		}
	}
	return -1; 
} 

//cach nhanh
long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b);
} 

long long lcm(long long a, long long b){
	return a/gcd(a,b)*b;
}

//Tim bcnn cua 3 so x,y,z
//Tim so nho nhat co n chu so chia het cho x,y,z : (n+p-1)/p*p
long long solve2(int n, int x, int y, int z){
	long long tmp = lcm(lcm(x,y),z);
	long long m = (long long)pow(10,n-1);
	long long res = (m + tmp-1)/tmp*tmp;
	if(res < (long long)pow(10,n))
		return res;
	else return -1;
}
int main () {
	int x,y,z,n;
	cin >> x >> y >> z >> n;
	//cout << solve(x,y,z,n); 
	cout << solve2(n,x,y,z); 
} 
