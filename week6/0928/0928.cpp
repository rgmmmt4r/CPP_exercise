//計算n = ? 時  2a >b 
//寫高等統計作業時遇到的問題，使用程式處理
#include <iostream>
using namespace std;

int main(){
	int n=1;
	long long a=365,b=365;
	while((2*a)>b){
		a = a*(365-n)/365;
		cout << "乘" << 365-n << endl; 
		b = b;
		n = n+1;
		cout << "2a = " << 2*a  << " b = " << b << " "<<  n << endl;
	}
	cout << "2a = " << 2*a << " b = " << b << " "<<  n << endl;
	return 0;
}