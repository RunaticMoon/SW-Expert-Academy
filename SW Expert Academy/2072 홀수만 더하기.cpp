#include <iostream>
using namespace std;

int T, num, sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		sum = 0;

		for (int i = 0; i < 10; i++) {
			cin >> num;
			sum += (num % 2 == 0) ? 0 : num;
		}

		cout << "#" << test_case << " " << sum << "\n";
	}

	return 0;
}