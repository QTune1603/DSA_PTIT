#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt[1000001] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	int min_val = 1e9, max_val = -1e9;
//Truong hop de cho 2 phan tu doi mot khac nhau
//	for(int i = 0 ; i < n ; i++){
//		cin >> a[i];
//		cnt[a[i]]++;
//		min_val = min(min_val,a[i]);
//		max_val = max(max_val,a[i]);
//	}
//	for(int i = 0 ; i < m ; i++){
//		cin >> b[i];
//		cnt[b[i]]++;
//		min_val = min(min_val,b[i]);
//		max_val = max(max_val,b[i]);
//	}
//	for(int i = min_val ; i <= max_val ; i++){
//		if(cnt[i]) cout << i << " ";
//	}
//	cout << endl;
//	for(int i = min_val ; i <= max_val ; i++){
//		if(cnt[i]==2) cout << i << " ";
//	}

//Truong hop cac phan tu trong mang co the giong nhau
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		cnt[a[i]] = -1;
		min_val = min(min_val,a[i]);
		max_val = max(max_val,a[i]);
	}
	for(int i = 0 ; i < m ; i++){
		cin >> b[i];
		if(cnt[b[i]] == -1) cnt[b[i]] = 2;
		else cnt[b[i]] = 1;
		min_val = min(min_val,b[i]);
		max_val = max(max_val,b[i]);
	}
	for(int i = min_val ; i <= max_val ; i++){
		if(cnt[i] != 0) cout << i << " ";
	}
	cout << endl;
	for(int i = min_val ; i <= max_val ; i++){
		if(cnt[i]==2) cout << i << " ";
	}
}