#include<bits/stdc++.h>
using namespace std;
#define ll long long


//Sửa đèn áp dụng sliding window
/*
input :
 	10 6 5
 	2 
 	10 
 	1
 	5
 	9
output:
	1

Tức là có 10 đèn:1 2 3... 10 và đèn bị hỏng là các đèn  2,10,1,5,9
  0 1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8 9 10
  x x     x       x  x
Ta phải sửa số đèn ít nhất để được k=6 đèn liên tiếp hoạt động
Đèn cần sửa là đèn 5 ==> 3 4 5 6 7 8 
Nếu chọn sửa đèn 1 và đèn 2  hay sửa đèn 9 và 10 thì ta cần sửa 2 đèn(ko tối ưu)
*/
int main(){
	int n,k,b; cin >> n >> k >> b;
	int a[100001] = {0};
	for(int i = 0 ; i < b ; i++) {
		int x; cin >> x;
		a[x] = 1; //cai den o chi so x bi hong
	}
	int sum = 0;
	for(int i = 0 ; i < k ; i++){ //cua so dau tien
		if(a[i] == 1) sum += a[i];
	}
	int ans = sum;
	for(int i = k ; i < n ; i++){
		sum = sum - a[i-k] + a[i];
		ans = min(ans,sum);
	}
	cout << ans << endl;
}