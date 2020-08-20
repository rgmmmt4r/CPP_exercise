// 短程與長程的 or(或) , not (!),三元條件運算符號 ternary (?:) - 條件運算符號 影片 2 - 011 Value 3 運算式5
#include <iostream>

using namespace std;

int main(){
	int a = 5, b = 6, c = 7;
	/*
	bool d = ++a>= b-- && --b >= c--; // --b 是 5, c-- 是7（之後才減1成為6）所以d 是0 
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	
	bool d = ++a> b-- && --b >= c--;
	//＆＆：短程 左值不成立，右值不運算
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	bool d = ++a> b-- & --b >= c--;
	//＆:長程 左值不成立，右值一樣運算
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	*/
	cout << "Please input a number => ";
	int number;
	cin >> number;
	
	if(number !=0 && 10000/number >10)//左值不成立，右值不運算！！
		cout << "Hi" << endl;
	else
		cout << "Hello" << endl;
	return 0;
}