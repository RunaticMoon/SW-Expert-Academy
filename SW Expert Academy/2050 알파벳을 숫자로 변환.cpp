#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int len;

	cin >> str;
	len = str.length();
	for (int i = 0; i < len; i++) {
		cout << (str[i] - 'A') + 1 << " ";
	}

	return 0;
}