// 判斷輸入數字中哪一個數字最大 的錯誤範例 使用 if else if
#include <iostream>

using namespace std;

int main(){
	int Num[5];
	cout << "請輸入五個數＝>" << endl;
	int i;
	for(i=0;i<5;i++)
		cin >> Num[i];
	int L = Num[0];
	// 以下是錯誤範例

	if(L<Num[1])// 如果此行成立，下面的else 就不會成立，但是這不是我們要的！
		L = Num[1];
	else if(L<Num[2])
		L = Num[2];
	else if(L<Num[3])
		L = Num[3];
	else if(L<Num[4])
		L = Num[4];
	cout <<  L << endl;
	/* 輸入3
	4
	5
	1
	2
	輸出 4
	*/
	return 0;
} 