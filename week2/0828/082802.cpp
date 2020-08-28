//0828.cpp 宣告方法應用在比三個數中，可以省去很多步驟！
#include <iostream>

using namespace std;


int main(){
	int a,b,c,d;
	cout << "請輸入三個數" << endl;
	cin >> a >> b >> c;
	d = a;
	if(d<b)
		d = b;
	if(d<c)
		d = c;
	cout << "比較大的是" << d << endl; 


	return 0;
}