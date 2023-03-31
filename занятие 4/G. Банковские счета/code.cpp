#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

	unordered_map<string, long long> NameToSum;

	string Query;
	while (cin >> Query) {

		string name; int  sum;
		string name1, name2;

		if (Query == "DEPOSIT") {

			cin >> name >> sum;
			NameToSum[name] += sum;
		}
		if (Query == "WITHDRAW") {

			cin >> name >> sum;
			NameToSum[name] -= sum;
		}
		if (Query == "BALANCE") {

			cin >> name;

			if (NameToSum.find(name) != NameToSum.end()) { cout << (NameToSum[name]) << '\n'; }
			else { cout << "ERROR\n"; }
		}
		if (Query == "TRANSFER") {
			
			cin >> name1 >> name2;
			cin >> sum;
			NameToSum[name2] += sum;
			NameToSum[name1] -= sum;
		}
		if (Query == "INCOME") {
			int  income;
			cin >> income;
			for (auto& [name, sum] : NameToSum) {
				if (sum > 0) {
					double new_sum = sum * (100 + income) / 100;
					
					sum = (new_sum);
				}
			}

		}
	}
}
