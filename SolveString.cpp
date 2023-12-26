#include<bits/stdc++.h>
using namespace std;


//chu so cuoi cua a^n la chu so cuou cung cua a roi mu n
char a[10000001], n[10000001];
int main(){
	cin >> a >> n;
	int tmp = a[strlen(a)-1]-'0';//chu so cuoi cung cua a
	if(tmp==0 || tmp == 1 || tmp==5 || tmp==6){
		cout << tmp;
		return 0;
	}
	int r;
	if(strlen(n)==1)r = n[0]-'0';//chu so cuoi cung neu n co 1 chu so
	else r = (n[strlen(n)-2]-'0')*10 + n[strlen(n)-1]-'0'; //2 chu so cuoi cung
	int r2[4] = {6,2,4,8};
	int r3[4] = {1,3,9,7};
	int r4[4] = {6,4,6,4};
	int r7[4] = {1,7,9,3};
	int r8[4] = {6,8,4,2};
	int r9[4] = {1,9,1,9};
	r %= 4;
	if(tmp==2) cout << r2[r];
	else if(tmp==3) cout << r3[r];
	else if(tmp==4) cout << r4[r];
	else if(tmp==7) cout << r7[r];
	else if(tmp==8) cout << r8[r];
	else if(tmp==9) cout << r9[r];
} 
