#include<bits/stdc++.h>
using namespace std;
#define ll long long

//Sap xep tang dan
int cmp1(const void *a, const void *b){
	return *(int*)a- *(int*)b;
}

//Sap xep giam dan
int cmp2(const void *a, const void *b){
	return *(int*)b- *(int*)a;
}

int main(){
	int t; cin >> t;
	for(int i = 1 ; i <= t ; i++){
		int n; cin >> n;
		int a[n],b[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++) cin >> b[i];
		qsort(a,n,sizeof(int),cmp1);
		qsort(b,n,sizeof(int),cmp2);
		cout << "Test " << i << ":" << endl;
		for(int i = 0 ; i < n ; i++){
			cout << a[i] << " " << b[i] << " ";
		}
		cout << endl;
	}
}