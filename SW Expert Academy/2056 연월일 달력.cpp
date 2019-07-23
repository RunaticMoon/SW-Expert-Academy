#include <iostream>
using namespace std;

const int maxDate[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	int T, day;
	int year, month;

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> day;

		year = day / 10000;
		day %= 10000;

		month = day / 100;
		day %= 100;

		cout << "#" << test_case << " ";
		if (month < 1 || month > 12
			|| maxDate[month] < day) {
			cout << -1 << endl;
		}
		else {
			cout <<
				((year < 1000) ? "0" : "") << year << "/" <<
				((month < 10) ? "0" : "") << month << "/" << 
				((day < 10) ? "0" : "") << day << endl;
		}
	}

	return 0;
}