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

	
	//因為for本身就有條件，所以上述兩個for 可以省略掉if如下：
	for(i=start ;i <= end ; i++)
		total += i;
	for(i=end ;i <= start ; i++)
		total += i;
	if(start == end)
		total -= start;



	return 0;
}