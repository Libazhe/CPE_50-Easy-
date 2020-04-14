#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int testCase;
	string country[2000];
	string nameOfWoman;

	cin >> testCase;          //測資數量

	for (int i = 0; i < testCase; i++) {   //依照題目要求，我們只取每一行前面的國家名稱，在空格後的人名就不儲存了
		cin >> country[i];                 //將國家名儲存進country陣列中
		getline(cin, nameOfWoman);         //把不要的人名用getline讀掉
	}

	sort(country, country + testCase);    //利用algorithm函式庫的function(sort)將country依照字母順序做排序

	for (int i = 0; i < testCase; i++) {
		cout << country[i] << " ";      //印出國家名
		int counter = 0;
		int j;
		for (j = i; j < testCase; j++) {
			if (country[i] != country[j]) {   //如果兩個國家名不一樣，跳出迴圈
				break;
			}
			counter++;         //使用counter紀錄該國家出現幾次
		}
		cout << counter << endl;    //印出該國家出現次數
		i = j-1;   //令i=j-1的原因是，目前還包在一個for迴圈裡，結束一圈迴圈後會i++，因此要讓j-1，下一個迴圈的i才能對上新的國家(還沒出現過的下一個國家)
	}

	system("pause");
	return 0;
}