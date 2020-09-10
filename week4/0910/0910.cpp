// else 中的 if 與 else if 之間的關係  注意其中的差別
#include <iostream>

using namespace std;

int main(){
	/*
	cout <<"情形一 else 中的 if 可以改成 else if" << endl;
	//else 中的 if
	int a = -1,b = -1, c = 1;
	if(a > 0){
		cout << "a > 0" << endl;
	}else{
		if(b > 0){
			cout << "b>0" << endl;
		}else{
			if(c>0){
				cout << "c>0" << endl;
			}
		}
	}
	//可以改成改成 else if
	if(a > 0){
		cout << "a > 0" << endl;
	}else{
		if(b > 0){
			cout << "b>0" << endl;
		}else{
			if(c>0){
				cout << "c>0" << endl;
			}
		}
	}
	*/
	/*
	cout <<"情形二 else 中的 if 不可以改成 else if" << endl;
	//else 中的 if
	int a = 1,b = 1, c = 1;
	if(a > 0){
		cout << "a > 0" << endl;
	}else{
		if(b > 0){
			cout << "b>0" << endl;
		}
		if(c>0){									// else 中有兩個if !!
			cout << "c>0" << endl;
		}
	}
	//不可以改成改成 else if
	if(a > 0){
		cout << "a > 0" << endl;
	}else if(b > 0){
		cout << "b>0" << endl;
	}
	if(c>0){										// 這個if 與 上面的 if 前提不同 跑出來結果不同
		cout << "c>0" << endl;		
	}
	*/
	cout <<"情形三 else 中的 if 不可以改成 else if" << endl;
	//else 中的 if
	int a = -1,b = 1, c = 1;
	if(a > 0){
		cout << "a > 0" << endl;
	}else{
		if(b > 0){
			cout << "b>0" << endl;
		}
		if(c>0){									// else 中有兩個if !!
			cout << "c>0" << endl;
		}
	}
	//不可以改成改成 else if
	if(a > 0){
		cout << "a > 0" << endl;
	}else if(b > 0){
		cout << "b>0" << endl;
	}else	if(c>0){										// 這個if 與 上面的 if 前提不同 故結果不同
		cout << "c>0" << endl;
	}

	cout << "結論：else 中的 if 改成 else if 時要很小心" << endl;
	cout << "最保險的辦法就是都用巢狀if 寫，熟習了之後再用 else if 寫" << endl;

	return 0;
}
