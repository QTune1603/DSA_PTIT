#include<bits/stdc++.h>
#include<stack>
using namespace std;

/*
	CTDL stack
	LIFO : Last in first out(Vao cuoi ra dau) 
	
	// push : them 1 ptu vao ngan xep
	// pop : Lay 1 ptu ra khoi ngan xep
	// top : Lay ra ptu o dinh ngan xep
	// size : so luong ptu trong ngan xep
	// empty : check xem ngan xep co rong hay khong
	O(1)

*/

void solve(){
	//Chuyen doi so nhi phan dung ngan xep
	int n; cin >> n;
	stack<int> st;
	while(n != 0){
		st.push(n%2);
		n /= 2;
	}
	while(!st.empty()){ //khi nao ma stack chua rong
		cout << st.top(); // in ra dinh
		st.pop(); // xoa di dinh cua stack
	}	
}

void solve2(){
	//in 1 xau theo thu tu nguoc lai
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	stack<string> st;
	while(ss >> token){
		st.push(token);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}

void solve3(){
	//Kiem tra dau ngoac hop le
	string s;
	getline(cin,s);
	stack<char> st;
	for(char x:s){
		if(x == '('){
			st.push(x);
		}
		else {
			if(st.empty()){ //neu stack rong
				cout << "INVALID\n";
				return ;
			}
			else { //ko thi xoa 1 ptu o dinh stack
				st.pop();
			}
		}
	}
	if(st.empty()){ //chay dc xuong day neu stack rong tuc la du so cap
		cout << "VALID\n";
	}
	else { //stack con ptu
		cout << "INVALID\n";
	}
	
}

void solve4(){
	//Next greater element(Ptu dau tien lon hon ben phai
	int n;
	cin >> n;
	int a[n], b[n];
	stack<int> st;
	for(auto &x:a){
		cin >> x;
	}
	/*
	input: 
	7
	3 4 2 5 1 6 2
	output:
	4 5 5 6 6 -1 -1
	*/
	for(int i = 0 ; i < n ; i++){
		if(st.empty()){ //neu stack rong 
			st.push(i); //duyet bang chi so
		}
		else {
			//chung nao stack chua rong va ptu trong stack < a[i] thi con lap
			while(!st.empty() && a[st.top()] < a[i]){ 
				b[st.top()] = a[i];
				st.pop(); //day ptu tren dinh stack ra khoi stack
			}
			st.push(i); //cap nhat tiep de duyet
		}
	}
	while(!st.empty()){ //nhung ptu con lai trong stack la ko co so lon hon dung sau
		b[st.top()] = -1;
		st.pop();
	}
	for(int x:b){
		cout << x << " ";
	}
}

int main(){
	//Khai bao(co nhieu kieu du lieu co the luu dc(char,string,..))
//	stack<int> st;
//	//them ptu
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	cout << st.top() << endl; //3 la o dinh stack
//	st.pop(); //xoa ptu o tren dinh
//	cout << st.top() << endl; //dinh cua stack gio la 2 vi 3 dc lay ra 
//	cout << st.size() << endl; //so luong ptu trong stack
//	
//	//checl xem stack co rong hay khong
//	st.pop();
//	st.pop();
//	if(st.empty()){
//		cout << "Empty!";
//	}
	
	//dien tich hinh chu nhat lon nhat tren ban do(maximum rectangular area in histogram
	int n; cin >> n;
	int a[n], b[n];
	for(int &x:a) cin >> x;
	stack<int> st;
	int res = INT_MIN;
	int i = 0;
	while(i < n){
		if(st.empty() || a[i] >= a[st.top()]){
			st.push(i);
			++i;
		}
		else {
			int idx = st.top(); //chi so cua cot o dinh stack
			st.pop();
			//tinh toan hcn tao boi cot hien tai
			//coi la cot ngan nhat cua hcn do
			if(st.empty()){
				res = max(res, i * a[idx]);
			}
			else {
				res = max(res, a[idx] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty()){
		int idx = st.top(); //chi so cua cot o dinh stack
		st.pop();
		//tinh toan kcn tao boi cot hien tai, trong do cot hien tai
		//duoc coi la cot ngan nhat cua hcn do 
		if(st.empty()){
			res = max(res , i*a[idx]);
		}
		else {
			res = max(res, a[idx] - (i -st.top() - 1));
		}
	}
	cout << res << endl;
	return 0;
}