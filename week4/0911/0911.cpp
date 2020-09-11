// switch 基本語法複習
#include <iostream>
#include <string>

using namespace std;
int main(){
	int input;
	cout << "上榜機率計算機^^" << endl;
	cout << "請輸入您的讀書認真程度， 從小到大為0~5" << endl;
	cin >> input;
	const int c = 0;
	string p;
	switch(input){
		case c:
			p = "0%";
			break;
		case c+1:
			p = "20%";
			break;
		case c+2:
			p = "40%";
			break;
		case c+3:
			p = "60%";
			break;
		case c+4:
			p = "80%";
			break;
		case c+5:
			p = "100%";
			break;
		default:
			p = "輸入錯誤";
	}
	cout << "您上榜的機率為 " << p << endl;
	return 0;
}