//- if 影片 1 
#include <iostream>

using namespace std;

int main(){
	int num1,num2;
	cout << "請輸入二數";
	cin >> num1 >> num2;
	if(num1 <= num2)
		cout << "前數小於等於後數";
	else
		cout << "前數大於後數";
	return 0;
}