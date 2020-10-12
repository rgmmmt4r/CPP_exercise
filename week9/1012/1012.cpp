///for 加總 輸入起始值和結束值 加入防呆機制：起始值和結束值輸入相反 寫法二
#include <iostream>
using namespace std;

int main(){
	cout << "請輸入起始值和結束值，我幫您加總" << endl;
	int i,start,end,total = 0;
	cout << "起始值=>" << endl;
	cin >> start;
	cout << "結束職=>" << endl;
	cin >> end;

	if(start <= end){
		for(i=start ;i <= end ; i++)
			total += i;
	}else{
		for(i=end ;i <= start ; i++)
			total += i;
	}

	cout <<  "總和是 "<< total <<endl;
	return 0;
}