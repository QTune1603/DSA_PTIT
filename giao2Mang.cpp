#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int j = 0 ; j < m ; j++) cin >> b[j];
	int i = 0, j = 0 ;
	int giao[min(n,m)], hop[n+m], g = 0 , h = 0;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao[g++] = a[i];
			hop[h++] = a[i];
			i++; j++;
		}		
		else if(a[i] > b[j]){
			hop[h++] = b[j++];
		}
		else {
			hop[h++] = a[i++];
		}
	}
	while(i < n){
		hop[h++] = a[i++];
	}
	while(j < m){
		hop[h++] = b[j++];
	}
	for(int i = 0 ; i < g ; i++){
		cout << giao[i] << " ";
	}
	cout << endl;
	for(int i = 0 ; i < h ; i++){
		cout << hop[i] << " ";
	}
}