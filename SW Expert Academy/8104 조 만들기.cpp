#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	int test_case;
	int T;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen(&quot;input.txt&quot;, &quot;r&quot;, stdin);
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, K, tmp = 1;
		int result = 0;
		int arr[21];
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
			 �� �κп� �������� �˰��� ������ ���ϴ�.
		 */
		cin >> N >> K;

		for (int i = 0; i < N / 2; i++) {
			result += (2 * K + 1) + (4 * K * i);
			tmp = 2 * K * (i + 1) + 1;
		}
		for (int i = 0; i < K; i++) {
			arr[i] = result;
			if (N % 2 != 0) {
				arr[i] += tmp + i;
			}
		}

		 /////////////////////////////////////////////////////////////////////////////////////////////

		cout << '#' << test_case << ' ';
		for (int i = 0; i < K; i++) {
			cout << arr[i] << ' ';
		}
		cout << "\n";
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}