#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int testCaseNum, relativeNum, streetNum[500] = { 0 }, output=0, mid;

	cin >> testCaseNum;

	for (int i = 0; i < testCaseNum; i++) {         //Or while(testCaseNum--)
		cin >> relativeNum;
		for (int j = 0; j < relativeNum; j++) {     //Or while(relativeNum--)
			cin >> streetNum[j]; 
		}
		sort(streetNum, streetNum + relativeNum);

		mid = streetNum[relativeNum / 2];         //璸衡い计(礚阶克杯计计┪案计常続ノ)

		for (int j = 0; j < relativeNum; j++) {   //衡籔–克杯禯瞒㎝
			output += abs(streetNum[j] - mid);
		}

		cout << output << endl;
		
		output = 0;
	}

	system("pause");
	return 0;
}