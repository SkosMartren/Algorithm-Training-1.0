#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> WordToCount;

	string str;
	while (cin >> str) {
		++WordToCount[str];
		cout << WordToCount[str]-1 << ' ';
	}
}
