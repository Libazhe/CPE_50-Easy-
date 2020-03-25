#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

	int HashmatArmy, enemy;

	while (cin >> HashmatArmy >> enemy) {
		cout << abs(HashmatArmy - enemy) << endl;   //Hashmat的士兵數與敵人士兵數的差 
	}

	system("pause");
	return 0;
}