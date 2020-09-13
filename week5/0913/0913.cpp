//switch 使用時機練習
#include <iostream>
#include <string>

using namespace std;

int main(){
	cout <<"季節轉換器" << endl;
	cout << "請輸入代號（0~3）" << endl;
	char input;
	cin >> input;
	string output = "輸入錯誤";
	//switch 使用時機：輸入代號轉換成輸出
	switch(input){
		case '0':
			output = "春天";
			break;
		case '1':
			output = "夏天";
			break;
		case '2':
			output = "秋天";
			break;
		case '3':
			output = "冬天";
			break;
	}
	/*
	另一種寫法，難閱讀，所以要用swith
	if(input == '0')
		output = "春天";
	else if(input == '1')
		output = "夏天";
	else if(input == '2')
		output = "秋天";
	else if(input == '3')
		output = "冬天";	
	*/
	cout << "目前是" << output << endl;

	return 0;
} 