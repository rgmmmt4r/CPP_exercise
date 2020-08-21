//函式呼叫 - 012 Value 4 
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int number;
	cout << "請輸入值，我幫你開根號";
	cin >> number;
	double answer;
	answer = sqrt(number);
	cout << answer << endl;
	if(sqrt(number)>10)
		cout << "開根號後大於10喔！" << endl;
	return 0;
}