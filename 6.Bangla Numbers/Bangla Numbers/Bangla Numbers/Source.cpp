#include <iostream>
#include <cstdlib>

using namespace std;

void convert(long long int Num, bool over);

int main() {

	long long int BanglaNum;
	int counter = 1;
	while (cin >> BanglaNum) {
		int temp = 0;
		if ((BanglaNum / 1000000000) != 0) {    //測資大於"kuti"(最大單位量詞)所能記載的範圍
			temp = BanglaNum % 1000000000;      //先暫存暫時被忽略的數
			BanglaNum /= 10000000;              //暫時忽略計不下的數
			cout << counter << ". ";
			convert(BanglaNum, true);
			convert(temp, false);
		}
		else {
			cout << counter << ". ";
			convert(BanglaNum, false);
		}
		counter++;
	}

	system("pause");
	return 0;
}

void convert(long long int Num, bool over) {    //over代表測資大於"kuti"(最大單位量詞)所能記載的範圍
	if (Num >= 10000000) {    //kuti            
		cout << Num / 10000000 << " kuti ";
		Num = Num % 10000000;
	}
	if (Num >= 100000) {      //lakh
		cout << Num / 100000 << " lakh ";
		Num = Num % 100000;
	}
	if (Num >= 1000) {        //hajar
		cout << Num / 1000 << " hajar ";
		Num = Num % 1000;
	}
	if (Num >= 100) {         //shata
		cout << Num / 100 << " shata ";
		Num = Num % 100;
	}
	if (over==false) {
		cout << Num << endl;
	}
}