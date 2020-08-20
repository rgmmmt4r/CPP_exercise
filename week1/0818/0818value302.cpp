// value3 %的用法
#include <iostream>

using namespace std;
int main(){
	int a,b;
	cout <<"請輸入一個整數";
	cin >> a;
	cout <<"請輸入另一個整數";
	cin >> b;
	int c;
	c = a % b;

	if(c == 0)
		cout << a << "是" << b << "的倍數" << endl;
	else
		cout << a << "不是" << b << "的倍數" << endl;

	int d;
	d = a - b;
	cout << a << "%" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << d << endl;

	return 0;
}