// 請依序輸入五個正整數 if else 版本
#include <iostream>

using namespace std;

int main(){
	int Num[5];
	cout << "請依序輸入五個正整數 ==>" << endl;
	int i;
	for(i=0;i<5;i++)
		cin >> Num[i];
	int L= Num[0];
	bool same = true;
	for(i=0;i<5;i++){
		if(L < Num[i]){
			L = Num[i];
			same = false;
		}
	}
	if(!same)
		cout << "最大的是 " << L << endl;
	else
		cout << "五個數一樣大" << endl;

	return 0;
}