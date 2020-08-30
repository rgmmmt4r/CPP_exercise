//技術輸入的整數除五後的餘數
#include <iostream>

using namespace std;

int main(){
	int input;
	cout << "Please input a number" << endl;
	cin >> input;

	int a = 0;
	input = input % 5;
	if(input == 1)
		a = 1;
	if(input == 2)
		a = 2;
	if(input == 3)
		a = 3;
	if(input == 4)
		a = 4;

	if(a == 0)
		cout << "zoro" << endl;
	if(a == 1)
		cout << "one" << endl;
	if(a == 2)
		cout << "two" << endl;
	if(a == 3)
		cout << "three" << endl;
	if(a == 4)
		cout << "four" << endl;


	return 0;
}