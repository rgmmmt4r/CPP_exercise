//  if else 的要注意的事
#include <iostream>

using namespace std;

int main(){
	int a = 10, b = 20;

	if(a > b)
		cout <<"a>b" <<endl;
		cout <<"extraspace" << endl; //這樣子編譯不會過，因為else 前面要接if ，但是在這邊是接了這一行
	else
		cout <<"a<=b" <<endl;


	return 0;
}