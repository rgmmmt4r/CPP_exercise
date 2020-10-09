//for 的另一種寫法，分號間可以不寫東西
//for 裡面也可以寫多個宣告和條件
#include <iostream>
using namespace std;

int main(){
	int n=1;
	//for 的分號間可以不寫東西
	for(;;){
		cout << "第" << n <<  "次迴圈" << endl;
		n++;
		if(n == 5)
			break;
	}
	//for 裡面也可以寫多個宣告和條件
	for(int x =1,y = 1; x<5 && y <10; x ++ ,y++ ){
		cout << "x and y both add 1" << endl;
	}



	return 0;
}