//用switch 寫判斷分數等地 分成基本和進階版
#include <iostream>
#include <string>
using namespace std;

/*
分數等地定義
優：100~90
甲：90~80
乙：80~70
丙：70~60
丁：60以下

*/
int main(){
	int score;
	cout << "請輸入您的分數=>" ;
	cin  >> score;

	//基本版
	/*
	string s;
	int i = score /10;
	switch(i){
		case 10:
		case 9:
			s = "優";
			break;
		case 8:
			s = "甲";
			break;
		case 7:
			s = "乙";
			break;
		case 6:
			s = "丙";
			break;
		default:
			s = "丁";
	}
	if(score > 100 || score < 0)
		s = "分數錯誤";
	*/
	//進階版
	string s = "分數錯誤";
	int i = score /10;
	switch(i){
		case 9:
			s = "優";
			break;
		case 8:
			s = "甲";
			break;
		case 7:
			s = "乙";
			break;
		case 6:
			s = "丙";
			break;
		default:
			if(score < 0 || score > 100)
				break;
			else if(score >= 90 && score <= 100)
				s = "優";
			else
				s = "丁";
	}


	cout << s << endl;


	
	return 0;
}