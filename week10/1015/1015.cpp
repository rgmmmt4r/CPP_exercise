// 各種三角形
#include <iostream>
using namespace std;

int main(){
	int x,y;
	for(x=1;x<=5;x++){
		for(y=1;y<=x;y++){
			cout <<y << " ";
		}
		cout << endl;
	}	
	cout << "========="<< endl ;
	for(x=5;x>=1;x--){
		for(y=1;y<=x;y++){
			cout <<y << " ";
		}
		cout << endl;
	}	
	cout << "========="<< endl ;
	for(x=1;x<=5;x++){
		for(y=5;y>=x;y--){
			cout <<y << " ";
		}
		cout << endl;
	}	
	cout << "========="<< endl ;
	for(x=1;x<=5;x++){
		for(y=4;y>=x;y--){
			cout << " ";
		}
		for(y=1;y<=2*x-1;y++){
			cout << y;
		}
		cout <<  endl;
	}
	for(x=4;x>=1;x--){
		for(y=4;y>=x;y--){
			cout << " ";
		}
		for(y=1;y<=2*x-1;y++){
			cout << y;
		}
		cout <<  endl;
	}

	return 0;
}