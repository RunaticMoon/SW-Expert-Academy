#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	cin >> str;

	for (char& c : str) {
		cout << static_cast<char>(toupper(c));
	}

	return 0;
}