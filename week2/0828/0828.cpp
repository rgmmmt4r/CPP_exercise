#include <iostream>

using namespace std;


int main(){
	int a,b,c = a;
	cout << "請輸入兩個數" << endl;
	cin >> a >> b;
	if(a<b)
		c = b;//原本c 就是 a ， 所以只要一個if即可
	cout << "比較大的是" << c << endl; 


	return 0;
}