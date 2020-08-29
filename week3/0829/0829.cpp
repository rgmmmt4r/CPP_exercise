// 模仿if 影片 4 做出判斷五個輸入中 第幾個數字最大

#include <iostream>

using namespace std;

int main(){
	cout << "請依序輸入五個數字" <<  endl;
	int a[5];
	int i;
	for(i=0;i<5;i++)
		cin >>a[i];
	int value = a[0],number = 1; //value 用於比大小 number用於找第幾個數字
	for(i=1;i<=5;i++){
		if(value< a[i]){
			value = a[i];
			number = i;
		}
	}
	cout << "最大的是第" << number << "個" << endl;
	return 0;
} 