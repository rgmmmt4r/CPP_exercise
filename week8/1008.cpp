//for的其他寫法 ，分號間可以空白
#include <iostream>
using namespace std;

int main(){
	int b = 1;
	for(;b<3;b++)
		cout << "for的其他寫法" <<endl;
	cout << "＝＝＝＝＝＝＝" <<endl;
	//因為b =3 ，以下不會被執行
	for(;b<3;b++)
		cout << "for的其他寫法" <<endl;


	return 0;
}