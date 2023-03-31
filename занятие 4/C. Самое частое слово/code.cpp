#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	map<string, int> WordToCount; // "Если таких слов несколько, выведите то, которое меньше в лексикографическом порядке."

	string str;
	while (cin >> str) {++WordToCount[str];}

	cout << max_element(WordToCount.begin(), WordToCount.end(), [](const auto& x, const auto& y) {
		return x.second < y.second;
		})->first;
}
