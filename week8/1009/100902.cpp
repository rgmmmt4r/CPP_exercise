//輸入2數，加總2數之間的數
#include <iostream>
using namespace std;

int main(){
	int s,e;
	cout <<  "輸入2數，加總2數之間的數，輸入順序是小到大=>"<<endl;
	cin >> s >> e;
	int i,total=0;
	for(i=s;i<=e;i++)
		total = total +i;
	cout << total << endl;
	return 0;
}