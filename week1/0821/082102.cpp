// 自動轉型Implicit conversions與指定轉型Casting -
#include <iostream>

using namespace std;
int main(){
	int a = 3;
	int b = 3.14;
	cout << "a: " << a << " b: " << b << endl;
	//此為Implicit conversions

	int c = (int) 3.14;
	cout << "c: " << c << endl;
	// 此為Casting

	return 0;
}