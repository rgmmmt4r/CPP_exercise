//value3-運算式 -2(遞增與遞減運算符號)
#include <iostream>
using namespace std;
int main(){
	/*int a;
	a = 10;
	a++;// a = a+1
	cout << a << endl;
	*/
	/*
	int a = 5;
	int b = 6;
	int c;

	a = a + 1;
	c = a + b;
	// 相同於 
	//c = ++a + b;
	cout << a << " " <<  b  << " " << c << endl;
	*/
	int a = 5;
	int b = 6;
	int c;
	//c = a + b;
	//a = a + 1;
	
	// 相同於 
	c = a++ + b;
	cout << a << " " <<  b  << " " << c << endl;
	return 0;
}
