#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
	int sum = 0;
	while (n) {
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);

	int t; cin >> t;
	while (t--) {
		int size; cin >> size;
		int arr[size] = {};
		for (int i=0; i < size; i++)
			cin >> arr[i];

		int max_sum = -1;
		for (int i=0; i < size-1; i++) {
			for (int j=i+1; j < size; j++) {
				int sum = digitSum(arr[i] * arr[j]);
				max_sum = max(sum, max_sum);
			}
		}

		cout << max_sum << endl;
	}

	return 0;
}