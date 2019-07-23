#include <iostream>
#include <algorithm>
using namespace std;

int T, N;
int arr[200];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	cout << arr[N / 2] << "\n";

	return 0;
}