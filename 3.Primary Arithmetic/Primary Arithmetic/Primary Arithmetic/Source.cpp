#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int num1, num2;

	while ((cin >> num1 >> num2) && ((num1 + num2) != 0)) {    //當num1和num2均為0時，結束讀入

		int carry = 0, counter = 0;

		while ((num1 != 0) || (num2 != 0)) {
			if (((num1 % 10) + (num2 % 10) + carry)>=10) {     //有進位
				counter++;
				carry = 1;
			}
			else {             //沒進位
				carry = 0;
			}
			num1 /= 10;
			num2 /= 10;
		}

		if (counter == 0)
			cout << "No carry operation." << endl;
		else if (counter == 1)
			cout << "1 carry operation." << endl;
		else
			cout << counter << " carry operations." << endl;
	}

	system("pause");
	return 0;
}