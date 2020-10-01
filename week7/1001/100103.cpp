// while 輸入特定值結束迴圈，加入閏年計數器
#include <iostream>
#include <string>
using namespace std;
int main(){
		int year;
		string c = "a";
		int n =0 ;//閏年計數器
		while(c != "n" && c != "N"){
			cout << "請輸入年份" << endl;
			cin >> year;
			if(year <=0 ){
				cout << "輸入錯誤" << endl;
				continue;
			}
			bool answer = false;

			if((year % 4 == 0 && year % 100 !=0 )|| year % 400 == 0)
				answer = true;
			if(answer){
				cout << "是閏年" << endl;
				n++;
			}
			else	
				cout << "不是閏年" << 	endl;
			cout << "若要結束，請輸入n或N，若要繼續，請輸入其他字元=>"<<endl;
			cin >> c;
			if(c == "n" || c == "N"){
				cout << "共有" << n <<"個閏年，謝謝使用" << endl;
			}
		}
	return 0;
}