// 判斷是否為偶、奇數或零 if else 版本
#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "請輸入一個正整數=>"  << endl;
	cin >> num;


/*
	基本版
	int status = 1; // 0 代表零 1 代表 奇數 2 代表 偶數
	if(num % 2 == 0)
		status = 2;
	if(num == 0)
		status = 0;

	if(status == 0)
		cout << "零" << endl;
	if(status == 1)
		cout << "奇數" << endl;
	if(status == 2)
		cout << "偶數" << endl;
*/
/*
	if else 的錯誤版
	int status = 1; // 0 代表零 1 代表 奇數 2 代表 偶數
	if(num % 2 == 0)
		status = 2;
	else
		status = 0; //這裡要注意，status ＝＝ 1 的情況完全被else 砍掉了，這是錯誤的寫法

	if(status == 0)
		cout << "零" << endl;
	if(status == 1)
		cout << "奇數" << endl;
	if(status == 2)
		cout << "偶數" << endl;
*/
	//if else 的正確版
	int status = 1; // 0 代表零 1 代表 奇數 2 代表 偶數
	if(num % 2 == 0 && num != 0)
		status = 2;
	else{
		if(num == 0)
			status = 0; 
	}

	if(status == 0)
		cout << "零" << endl;
	else{
		if(status == 1)
			cout << "奇數" << endl;
		else
			cout << "偶數" << endl;
	}

	return 0;
}