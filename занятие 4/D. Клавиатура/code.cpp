#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n; cin >> n;
	vector<int> KeyToCount(n);

	for (int i = 0; i < n; ++i) {
		int count; cin >> count;
		KeyToCount[i] = count;
	}

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int key; cin >> key;
		--key;
		--KeyToCount[key];
	}

	for (const auto count : KeyToCount) {

		cout << ((count < 0) ? "YES" : "NO") << '\n';

	}
}
