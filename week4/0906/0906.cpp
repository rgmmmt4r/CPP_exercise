// 輸入成績後轉換成等地 使用 if else if 另一個版本
#include <iostream>
#include <string>
using namespace std;

int main(){
	int input;
	cout << "請輸入一數字" <<  endl;
	cin >> input;

	/* 0 for "優" 1 for "甲" 2 for "乙" 3 for "丙" 4 for "丁"
	90以上 優
	80~90 甲
	70~80 乙
	60~70 丙
	60 以下 丁
	*/
	string s = "丁";
	if(input >= 90)
		s = "優"; 
	else if(input >= 80)
		s = "甲";
	else if(input >= 70)
		s = "乙";
	else if(input >= 60)
		s = "丙";
	if(input > 100 ||  input < 0)
		s = "分數錯誤";

	cout << s << endl;
	return 0;
}