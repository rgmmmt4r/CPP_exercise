// break and continue 的使用
#include <iostream>
using namespace std;

int main(){
	int i;
	for(i = 1; i <= 20 ; i++){
		if(i % 5 == 0){
				cout << i << "\t";
		}
	}
	cout << endl;
	for(i=1; i <= 20;i++){
		if(i % 5 != 0)
			continue;
	}
	cout << i << "\t"; 
	cout << endl;
	return 0;
}