#include <iostream>
#include <string>
using namespace std;
int main(){
		cout << "請輸入年份，輸入零離開" << endl;
		int year;
		cin >> year;
		if(year == 0){
			cout << "謝謝使用" << endl;
			return 0;
		}
		while(year != 0){
			bool answer = false;
			if((year % 4 == 0 && year % 100 !=0 )|| year % 400 == 0)
				answer = true;


			if(answer)
				cout << "是閏年" << endl;
			else	
				cout << "不是閏年" << 	endl;
			string c;
			cout << "若要繼續使用，請輸入y或Y，若要離開，請輸入其他字元=>"<<endl;
			cin >> c;
			if(c != "Y" && c != "y"){
				cout << "謝謝使用" << endl;
				break;
			}else{
				cin >> year;
			}
		}
	return 0;
}