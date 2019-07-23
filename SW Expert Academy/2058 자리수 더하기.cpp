#include <iostream>
using namespace std;

int N, sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	while (N > 0) {
		sum += N % 10;
		N /= 10;
	}
	cout << sum;

	return 0;
}