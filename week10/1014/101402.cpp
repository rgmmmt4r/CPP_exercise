//印出9*9乘法表，並且對齊
#include <iostream>
using namespace std;

int main(){
	int x,y;
	int t;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			t = i*j;
			cout << i << "x" << j << ( t<10 ? "= ": "=" )  << i*j << "\t";
		}
		cout << endl;
	}

	return 0;
}