// switch 小練習：某國小班級人數查詢器，有三種寫法，分別從最基本到簡潔
#include <iostream>

using namespace std;

int main(){
	cout <<"某國小班級人數查詢器" << endl;
	cout <<"請輸入班級（1~10）=>" << endl;
	int c; // 班級
	cin >> c;
	int n; // 人數
	//寫法一 
	/*
	switch(c){
		case 1:
			n =30;
			break;
		case 2:
			n = 31;
			break;
		case 3:
			n = 32;
			break;
		case 4:
			n = 30;
			break;
		case 5:
			n = 20;
			break;
		case 6:
			n = 31;
			break;
		case 7:
			n = 30;
			break;
		case 8:
			n = 31;
			break;
		case 9:
			n = 30;
			break;
		case 10:
			n = 31;
			break;
		default:
			n = -1;
	}
	*/
	//寫法二 較簡潔
	/*
	switch(c){
		case 1:
		case 4:
		case 7:
		case 9:
			n =30;
			break;
		case 2:
		case 6:
		case 8:
		case 10:
			n = 31;
			break;
		case 3:
			n = 32;
			break;	
		case 5:
			n = 20;
			break;
		default:
			n = -1;
	}
	*/
	// 寫法三 更簡潔
	n = 30; // 人數直接設為30，可以省去很多case
	switch(c){
		case 2:
		case 6:
		case 8:
		case 10:
			n = 31;
			break;
		case 3:
			n = 32;
			break;	
		case 5:
			n = 20;
			break;
		default:
			if(c >10 || c < 0) // 帥氣的寫法
				n = -1;
			break;
	}

	if(n != -1 )
		cout << "人數是" << n << endl;
	else
		cout << "輸入錯誤" << endl;

	return 0;
}