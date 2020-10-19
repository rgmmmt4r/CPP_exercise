//陣列的宣告
#include <iostream>
using namespace std;

int main(){
	int Ary[10] = {0};
	for(int i =0;i<10;i++)
		cout << Ary[i] << " ";
	//如上宣告方法，會使得全部都是 0
	cout << endl;
	int Ary2[10] = {1,2,3};
	for(int i = 0;i<10;i++)
		cout << Ary2[i];
	//如上宣告方法，會使得沒有宣告到的都是 0
	cout << endl;
	return 0;
}