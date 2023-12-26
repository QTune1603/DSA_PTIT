#include<bits/stdc++.h>
using namespace std;

int n, a[20],ok;
vector<string> v;

void day(){
	if(a[1] != 8 or a[n] != 6) return;
	for(int i =	1 ; i <= n ; i++){
		if(a[i] == 8){
			int dem = 0;
			while(a[i] == 8){
				dem++;
				i++;
			}
			i--;
			if(dem >= 2) return;
		}
		if(a[i] == 6){
			int dem = 0;
			while(a[i] == 6){
				dem++;
				i++;
			}
			i--;
			if(dem >= 4) return;
		}
	}
	string s = "";
	for(int i = 1 ; i <= n ; i++){
		s = s + char(a[i] + '0');
	}
	v.push_back(s);
}

void sinh(int k){
	if(k > n) day();
	else {
		a[k] = 6;
		sinh(k+1);
		a[k] = 8;
		sinh(k+1);
	}
}

int main(){
	cin >> n;
	sinh(1);
	sort(v.begin(), v.end());
	for(auto i:v){
		cout << i << endl;
	}
}