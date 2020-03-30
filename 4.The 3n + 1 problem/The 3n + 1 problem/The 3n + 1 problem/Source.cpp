#include <iostream>
#include <cstdlib>

using namespace std;

int cycleAlg(int n);

int main() {

	int i, j,cycLen;

	while (cin >> i >> j) {
		int max = 0;
		for (int k = i; k <= j; k++) {
			cycLen = cycleAlg(k);
			if (cycLen > max)
				max = cycLen;    //找出最大的cycel length
		}
		cout << i << " " << j << " " << max;
	}

	system("puase");
	return 0;
}

int cycleAlg(int n) {
	int counter = 1;
	
	if (n == 1)           //if n = 1 then STOP (當n是1時就停止)
		return counter;

	while (n != 1) {
		if ((n % 2) != 0) {   //如果n是奇數則n=3n+1
			n = 3 * n + 1;
			counter++;
		}
		else {              //如果不是奇數則將n除以2
			n /= 2;
			counter++;
		}
	}
	return counter;
}