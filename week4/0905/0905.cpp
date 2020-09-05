// 判斷 odd even or zero  if else if 版本
#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "請輸入一個整數=>"  << endl;
	cin >> num;
	int status = 1; // 0 代表零 1 代表 奇數 2 代表 偶數
	if(num % 2 == 0 && num != 0)
		status = 2;
	else if(num == 0)
			status = 0; 


	if(status == 0)
		cout << "零" << endl;
	else if(status == 1)
		cout << "奇數" << endl;
	else
		cout << "偶數" << endl;

	return 0;
}