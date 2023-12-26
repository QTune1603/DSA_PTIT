#include<bits/stdc++.h>
using namespace std;

bool scp(long long n){
	long long a = sqrt(n);
	if(1ll*a*a==n) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
//		for(int i = a ; i <= b ; i++){
//			if(scp(i)){
//				cout << i << " " ;
//			}	
//		}
		//Ta co the rut ngan tgian chay bang cach:
		int c1 = sqrt(a), c2 = sqrt(b);
		if(c1*c1 != a){
			c1++;
		}
		for(int i = c1 ; i <= c2 ; i++){
			cout << i*i << " ";
		}
		cout << endl;
	} 
}
