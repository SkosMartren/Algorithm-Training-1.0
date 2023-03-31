#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {

	int n; cin >> n;

	unordered_map<int, long long> WidthToMaxHeight;
	for (int i = 0; i < n; ++i) {
		long long Width, Height; cin >> Width >> Height;

		WidthToMaxHeight[Width] = max(WidthToMaxHeight[Width], Height);
	}

	long long ans = 0;
	for (const auto [Width, Height] : WidthToMaxHeight) {ans += Height;}
	cout << ans;
}
