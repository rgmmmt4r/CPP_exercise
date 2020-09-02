//判斷是否是潤年 if合併版
#include <iostream>

using namespace std;

int main(){
	int year;
	cout << "請輸入年份>>" << endl;
	cin >> year;

/* 
	潤年：
	1.必須是4的倍數
	2.不可是100的倍數
	3.必須是400的倍數
*/
	bool answer = true;

	if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)){
		answer = false;
	}	


	if(answer)
		cout << "是潤年" << endl;
	if(!answer)
		cout << "不是潤年" << endl;




	return 0;
} 