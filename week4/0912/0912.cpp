// switch 基本語法複習 -2
#include <iostream>
#include <string>

using namespace std;
int main(){
/*
	int input;
	cout << "上榜機率計算機^^" << endl;
	cout << "請輸入您的讀書認真程度， 從小到大為0~5" << endl;
	cin >> input;
	const int c = 0;
	string p = "輸入錯誤";				//這樣可以省略 switch 裡面的 defult 

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
	}
	cout << "您上榜的機率為 " << p << endl;
*/
	int input;
	cout << "上榜機率計算機^^" << endl;
	cout << "請輸入您的讀書認真程度， 從小到大為0~5" << endl;
	cin >> input;
	const int c = 0;
	string p = "輸入錯誤";	
	// 試試如果沒有 break			
	switch(input){
		case c:
			p = "0%";
			//break; 這邊沒有 break，會直接執行下面的 p = "20%";
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
	}
	cout << "您上榜的機率為 " << p << endl;

	return 0;
}