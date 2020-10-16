#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i,j,x;
	bool IsPrime = true;
	for(j=2;j<100;j++){
		IsPrime = true;
		for(i=2;i<sqrt(j);i+=(i == 2 ? 1:2)){
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