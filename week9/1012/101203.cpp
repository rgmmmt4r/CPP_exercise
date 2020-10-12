///for 加總 輸入起始值和結束值 加入防呆機制：起始值和結束值輸入相反 寫法三
#include <iostream>
using namespace std;

int main(){
	cout << "請輸入起始值和結束值，我幫您加總" << endl;
	int i,start,end,total = 0;
	cout << "起始值=>" << endl;
	cin >> start;
	cout << "結束值=>" << endl;
	cin >> end;
	int temp;
	if(start > end){
		temp = start;
		start = end;
		end = temp;
	}
		for(i=start ;i <= end ; i++)
			total += i;

	cout <<  "總和是 "<< total <<endl;


	return 0;
}