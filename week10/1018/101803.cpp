// 利用旗標控制離開巢狀迴圈
#include <iostream>
using namespace std;

int main(){
	int i,j,k;

	k = 1;
	for(i = 1;i<5;i++){
		for(j = 1; j< 6; j++ ){
			cout << j << "\t";
		}
		cout << endl;
	}
	cout << "============" << endl;
	k = 1;
	for(i = 1;i<5;i++){
		for(j = 1; j< 6; j++ ){
			if(i == 2){
				k = 2;
				break;
			}
			cout << j << "\t";
		}
		if(k == 2){
			break;
		}
	}
	return 0;
}