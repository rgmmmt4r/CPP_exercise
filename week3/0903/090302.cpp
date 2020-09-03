//  if else 的要注意的事
#include <iostream>

using namespace std;

int main(){
	int a = 10, b = 20;

	if(a > b)
		cout <<"a>b" <<endl;
	else
		cout <<"a<=b" <<endl; // else  是 if 不成立時一定要做的事情 
	
	//else也可以只用if寫出來
	if(a <= b)
		cout <<"a<=b" <<endl;


	return 0;
}