#include <iostream>
using namespace std;

int main(){
	int i;
	int ary[5];
	for(i=0;i<5;i++)
		ary[i] = 10*(i+1);
	for(i=0;i<5;i++)
		cout << ary[i] << " ";
	cout << endl;
	cout << sizeof(ary) << endl;
	//int 一格是4byte 五格是20 byte

	return 0;
}