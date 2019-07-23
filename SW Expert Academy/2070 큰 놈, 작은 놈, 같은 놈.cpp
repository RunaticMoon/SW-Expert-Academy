#include <iostream>
using namespace std;

int main() {
	int T, v1, v2;

	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> v1 >> v2;

		cout << "#" << i << " ";
		if (v1 > v2) cout << ">\n";
		else if (v1 < v2) cout << "<\n";
		else cout << "=\n";
	}

	return 0;
}