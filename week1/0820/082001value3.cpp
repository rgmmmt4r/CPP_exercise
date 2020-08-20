//0820  Value 3 運算式 5 
#include <iostream>

using namespace std;

int main(){
	int a = 5, b = 6, c = 7;
	bool d = a > b && b <c;//這是對的
	cout << d << endl;
	d = a > b < c; //a > b的結果是 0, 0 一定小於7
	return 0;
}