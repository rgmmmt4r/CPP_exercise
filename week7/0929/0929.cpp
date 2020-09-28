//閏年判斷器
//另一種簡潔寫法，使用break
#include <iostream>

using namespace std;
int main(){	



	while(1){
		int year;
		bool answer = false;
		cin >> year;
		if(year == 0){
			cout << "您可以休息囉" << endl;
			break;
		}
		if((year %4 == 0 && year % 100 != 0) || year % 400 == 0){
			answer = true;
		}

		if(answer)
			cout << "是閏年" << endl;
		else
			cout << "是平年" << endl;
	}
	return 0;
}