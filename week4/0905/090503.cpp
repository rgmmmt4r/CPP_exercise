// 輸入成績後轉換成等地 使用 if else if
#include <iostream>

using namespace std;

int main(){
	int input;
	cout << "請輸入一數字" <<  endl;
	cin >> input;
	int status = 0;
	/* 0 for "優" 1 for "甲" 2 for "乙" 3 for "丙" 4 for "丁"
	90以上 優
	80~90 甲
	70~80 乙
	60~70 丙
	60 以下 丁
	*/
	if(input >= 90)
		cout << "優" << endl;
	else if(input < 90 && input >= 80)
		cout << "甲" << endl;
	else if(input < 80 && input >= 70)
		cout << "乙" << endl;
	else if(input < 70 && input >= 60)
		cout << "丙" << endl;
	else if(input < 60)
		cout << "丁" << endl;
	return 0;
}