#include <iostream>        //參考資料:c/c++ 字串，字元轉數字，數字轉字元
#include <cstdlib>         //參考資料網址:https://www.itread01.com/content/1547992261.html
#include <string>

using namespace std;       //此題使用字串解決問題，因為題目說輸入位數可達1000位
                           //11的倍數有一個特性，奇數位數字總和與偶數位數字總和的差，必定能被11整除或是為0
int main() {

	string num;
	
	while ((cin >> num) && (num != "0")) {    //當讀到0時，結束
		int odd = 0;
		int even = 0;
		for (int i = 0; i < num.length(); i++) {  
			if ((i % 2) == 0) {  
				odd += num[i] - '0';      //-'0'是當前字元轉數字的方法(不使用函式庫)，使用標準函式庫function將字串轉數字的有例如(atoi)
			}                             //反之，不使用標準函式庫將整數轉字串也可以使用(+ '0')
			else {
				even += num[i] - '0';
			}
		}
		cout << num << " is ";
		if (((abs(odd - even)) % 11) != 0) {   //不是11的倍數
			cout << "not a multiple of 11." << endl;
		}
		else {
			cout << "a multiple of 11." << endl;
		}
	}

	system("pause");
	return 0;
}