// while 與 do while 的使用時機比較
#include <iostream>
using namespace std;

int main(){
	int a = 1;

	//以下兩種寫法，效果相同
	while(true){
		//code
		if(a <0){
			break;
		}
		//code
	}
	do{
		//code
		if(a<0){
			break;
		}
		//code
	}while(true);

	//以下兩種寫法，效果不同
	while(a>=0){
		//code 這個寫法，會先判斷 a 是否 >= 0
		if(a <0){
			break;
		}
		//code
	}

	do{
		//code  這個寫法，會先做這一行
		if(a<0){
			break;
		}
		//code
	}while(a>=0);

	//經驗累積過後，會更清楚使用時機


	return 0;
}