#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, string> Synonyms;

	int n; cin >> n;

	for (;n;--n) {
		string synonyms_1, synonyms_2;
		cin >> synonyms_1 >> synonyms_2;
		Synonyms[synonyms_1] = synonyms_2;
	}

	string synonyms; cin >> synonyms;

	for (auto [f,s] : Synonyms) {

		if (f == synonyms) {
			cout << s;
			return 0;
		}

		if (s == synonyms) {
			cout << f;
			return 0;
		}
	}
}
