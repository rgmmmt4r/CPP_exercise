///for 加總 輸入起始值和結束值 加入防呆機制：起始值和結束值輸入相反
#include <iostream>
using namespace std;

int main(){
	cout << "請輸入起始值和結束值，我幫您加總" << endl;
	int i,start,end,total = 0;
	cout << "起始值=>" << endl;
	cin >> start;
	cout << "結束職=>" << endl;
	cin >> end;

	for(i = (start < end ? start : end);i <= (start > end ? start : end);i++)
		total += i;

	cout <<  "總和是 "<< total <<endl;
	return 0;
}