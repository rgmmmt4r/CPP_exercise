// 短程與長程的 or(或) , not (!),三元條件運算符號 ternary (?:) - 條件運算符號 影片 2 - 011 Value 3 運算式5 
#include <iostream>

using namespace std;

int main(){
	/*
	int a = 5, c = 7;
	bool b = !(a>c);
	cout << b << endl;
	

	if(!(a>c))
		cout << "Hi" <<endl;
	
	bool b = false;
	if(!b)
		cout << "Hi" << endl;
	*/
	int a = 5, b = 6;
	int c = (a>b? a-b: b-a);//相當於取絕對值，小括號可以拿掉
	cout << c << endl; 
	return 0;
}