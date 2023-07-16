#include<iostream>

using namespace std;

using ull = unsigned long long;

int main() {

	//  a двоек, b троек и c четверок
	ull a, b, c; cin >> a >> b >> c;

	const ull Count = a + b + c;
	const ull Sum = 2 * a + 3 * b + 4 * c;

	long long Left = -1;
	ull Right = Count;

	while (1 != Right - Left) {

		const ull mid = (Right + Left) / 2;

		if (2 * (5 * mid + Sum) >= 7 * (Count + mid)) { // 2 * (5 * mid + Sum) >= 7 * (Count + mid)
			Right = mid;
		}
		else {
			Left = mid;
		}

	}

	cout << Right; // "минимальное число пятерок, которое необходимо получить ученику" --> для достижения минимума может быть достаточно и нуля пятерок
}
