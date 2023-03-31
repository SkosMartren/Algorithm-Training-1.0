#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	string buyer, product;
	int count;
	map<string, map<string, long long>> BuyerToProductAndCount;
	while (cin >> buyer >> product >> count) { BuyerToProductAndCount[buyer][product] += count; }

	for (const auto [buyer, ProductToCount] : BuyerToProductAndCount) {
		cout << buyer << ":\n";
		for (const auto [buyer, count] : ProductToCount) {
			cout << buyer << ' ' << count << "\n";
		}
	}
}
