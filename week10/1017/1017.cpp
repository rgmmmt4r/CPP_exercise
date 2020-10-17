#include <iostream>
using namespace std;

int main(){
	char c;

	do{
		cout <<"提款機，請輸入 1:提款 2:轉帳 3:餘額查詢 4:其他服務 5:離開 =>" << endl;
		bool status = true;
		cin >> c;
		switch(c){
			case '1':
				cout <<"提款" << endl;
				break;
			case '2':
				cout <<"轉帳" << endl;
				break;
			case '3':
				cout <<"餘額查詢" << endl;
				break;
			case '4':
				cout <<"其他服務" << endl;
				break;
			case '5':
				cout <<"離開" << endl;
				status = false;
				break;
			default :
				cout << "輸入錯誤" <<endl;
		}
		if(!status){
			break;
		}
		cout << "其他程式碼" << endl;	

	}while(1);
	return 0;
}