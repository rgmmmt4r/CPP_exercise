//輸入帳號及密碼, 登入失敗時會明確辯別是帳號錯誤還是密碼錯誤 不同寫法
#include <iostream>
#include <string>
using namespace std;

int main(){
	cout << "Please input name =>" << endl;
	string name;
	cin >> name;
	cout << "Please input password =>" << endl;
	string password;
	cin >> password;

	int result = 1; // 0 代表對 1  代表帳號錯 2 代表密碼錯 
	if(password != "1234"){
		result = 2;
	}
	if(name == "Eddie" &&  password == "1234"){
		result = 0;
	}


	if(result == 0)
		cout << "Welcome!" << endl;
	if(result == 1)
		cout << "Wrong name. " << endl;
	if(result == 2)
		cout << "Wrong password. " << endl;
	
	return 0;
}