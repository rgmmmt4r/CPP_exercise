#include <iostream>
using namespace std;

int main(){
	int i,j,x;
	bool IsPrime = true;
	for(j=2;j<100;j++){
		IsPrime = true;
		for(i=2;i<j;i++){
			if(j % i == 0){
				IsPrime = false;
				break;
			}
		}
		if(IsPrime)
			cout << j  << " " ;
	}
	cout << endl;

	return 0;
}