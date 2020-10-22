//輸入一連串分數，找出最小、最大、平均、從小到大的排序
//使用陣列和for迴圈
#include <iostream>
using namespace std;

int main(){
	int score[5];
	int length;
	cout << "請輸入有幾個分數：" << endl;
	cin >> length;
	for(int i =0;i<length;i++){
		cout << "請輸入分數" << endl;
		cin >> score[i];
	}

	//最大值
	int biggest = score[0];
	for(int i=0;i<length;i++){
		if(biggest <= score[i]){
			biggest = score[i];
		}
	}
	//最小值
	int smallest = score[0];
	for(int i=0;i<length;i++){
		if(smallest >= score[i]){
			smallest = score[i];
		}
	}
	//平均分
	double sum = 0;
	double average = 0;
	for(int i =0;i<length;i++){
		sum = sum + score[i];
	}
	average = sum / length;
	//泡沫排序
	int temp;
	for(int j = 0;j<length-1;j++){
		for(int i = 0;i<length-1;i++){
			if(score[i] > score[i+1]){
				temp = score[i];
				score[i] = score[i+1];
				score[i+1] = temp; 
			}
		}
	}
	//輸出部門
	cout << "最大值:\t" << biggest << endl;
	cout << "最小值:\t" << smallest << endl;  
	cout << "平均分:\t" << average << endl;
	cout << "排序結果:\t" << endl;
	for(int i = 0;i<length;i++)
		cout << score[i] << " ";
	cout << endl<< "謝謝使用" << endl;

	return 0;
}