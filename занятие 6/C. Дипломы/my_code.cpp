#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main() {

	unsigned long long w, h, n; cin >> w >> h >> n;
	unsigned long long left = 0;
	unsigned long long right = min(w, h) * n;

	while (1 != right - left) {

		const unsigned long long mid = (right + left) / 2;
		const unsigned long long W = (mid / w);
		const unsigned long long H = (mid / h);

		if (W * H >= n) {
			right = mid;
		}
		else {
			left = mid;
		}
	}

	cout << right;
}
