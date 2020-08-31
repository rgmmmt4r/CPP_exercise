//輸入帳號與密碼
// 有兩種寫法 第二種使用“||” 較簡潔
#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
	cout << "Please input name =>" << endl;
	string name;
	cin >> name;
	cout << "Please input password =>" << endl;
	string password;
	cin >> password;

	bool result = false;
	if(name == "Eddie"){
		if(password == "1234"){
			result = true;
		}
	}


	if(result)
		cout << "Welcome" << endl;
	if(!result)
		cout << "Wrong name or password" << endl;
	*/
	cout << "Please input name =>" << endl;
	string name;
	cin >> name;
	cout << "Please input password =>" << endl;
	string password;
	cin >> password;

	bool result = true;
	if(name != "Eddie"||password != "1234"){
		result = false;
	}


	if(result)
		cout << "Welcome" << endl;
	if(!result)
		cout << "Wrong name or password" << endl;
	return 0;
}