#include <iostream>
using namespace std;

int main() {
	int T, sum, v;

	cin >> T;
	for (int i = 1; i <= T; i++) {
		sum = 0;
		for (int j = 0; j < 10; j++) {
			cin >> v;
			sum += v;
		}

		cout << "#" << i << " ";
		if (sum % 10 >= 5) {
			sum /= 10;
			cout << sum + 1 << "\n";
		}
		else {
			sum /= 10;
			cout << sum << "\n";
		}
	}

	return 0;
}