#include <iostream>
using namespace std;

int main(){
	int x,y;
	int t;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			t = i*j;
			if(t < 10)
				cout << " ";
			cout << i << "x" << j << "=" << i*j << "\t";
		}
		cout << endl;
	}

	return 0;
}