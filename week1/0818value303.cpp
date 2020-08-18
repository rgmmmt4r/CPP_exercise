// value3 
//計算星期幾
#include <iostream>

using namespace std;
int main(){
	int a,b,start,day;
	cout <<"請輸入今天星期幾";
	cin >> start;
	cout <<"請輸入經過幾天";
	cin >> day;
	int endDay; // 經過幾天後星期幾
	endDay = (start + day)%7;

	cout << start <<"經過" << day << "天後是星期" <<  endDay << endl;
	return 0;
}