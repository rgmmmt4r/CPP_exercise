//for 加總 輸入起始值和結束值
#include <iostream>
using namespace std;

int main(){
	cout << "請輸入起始值和結束值，我幫您加總" << endl;
	int i,start,end,total = 0;
	cin >> start >> end;
	for(i=start ;i <= end ; i++)
		total += i;

	cout <<  "總和是 "<< total <<endl;
	return 0;
} 