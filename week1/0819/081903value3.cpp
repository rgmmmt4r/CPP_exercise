//value3-運算式 -4(關係運算符號)
#include <iostream>

using namespace std;
int main(){
	/*
	bool b;
	int a = 10, c= 20;
	b = 4;
	cout << b << endl;
	b = true;
	cout << b << endl;
	b = false;
	cout << b << endl;
	b = a < c;
	cout << b << endl;
	b = a == c;
	cout << b << endl;*/

	int a = 5, c = 6;
	bool b = ++a > c--;
	// 先 a = a +1 , 6 沒有大於6 所以 b = 0
	cout << a << endl << c  <<endl<< b << endl;
	return 0;
}