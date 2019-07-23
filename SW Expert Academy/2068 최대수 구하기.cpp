#include <iostream>
#include <algorithm>
using namespace std;

int T, v, mv;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		mv = 0;
		for (int i = 0; i < 10; i++) {
			cin >> v;
			mv = max(mv, v);
		}

		cout << "#" << test_case << " " << mv << "\n";
	}

	return 0;
}