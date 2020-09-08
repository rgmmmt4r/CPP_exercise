//if 的條件與其巢狀中 if 的條件是不是 and 的關係 
#include <iostream>

using namespace std;

int main(){
	cout << "Test 1" << endl;
	//測試一
	int a = 1, b = 1;
	//雙層if
	if(a>0){
		if(b>0){
			cout << "a>0 && b>0" << endl;
		}
	}else{
		cout << "a<=0";
	}
	//使用 && 相連
	if(a >0 && b > 0){
		cout << "a>0 && b>0" << endl;
	}else{
		cout << "a <= 0 || b <= 0" << endl;
	}
	/*
	說明：當 a >0 且 b > 0 時， 以上二者結果相同
	*/
	cout << "Test 2" << endl;
	//測試二
	int a = 1, b = -1;
	//雙層if
	if(a>0){
		if(b>0){
			cout << "a>0 && b>0" << endl;
		}
	}else{
		cout << "a<=0";
	}
	//使用 && 相連
	if(a >0 && b > 0){
		cout << "a>0 && b>0" << endl;
	}else{
		cout << "a <= 0 || b <= 0" << endl;
	}
	/*
	說明：當 a >0 且 b < 0 時， 以上結果不同
	雙層if 			：沒有東西
	使用 && 相連	：a <= 0 || b <= 0
	*/
	//測試三
	cout << "Test 3" << endl;
		int a = -1, b = 1;
	//雙層if
	if(a>0){
		if(b>0){
			cout << "a>0 && b>0" << endl;
		}
	}else{
		cout << "a<=0";
	}
	//使用 && 相連
	if(a >0 && b > 0){
		cout << "a>0 && b>0" << endl;
	}else{
		cout << "a <= 0 || b <= 0" << endl;
	}
		/*
	說明：當 a < 0 且 b > 0 時， 以上結果不同
	雙層if 			：a<=0
	使用 && 相連	：a <= 0 || b <= 0
	*/
	// 結論：要小心慎用 && ， 當我們確定只有 a > 0 且 b > 0 的情況才能用。

	return 0;
}