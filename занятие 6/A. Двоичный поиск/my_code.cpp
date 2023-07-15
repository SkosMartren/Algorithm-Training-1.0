#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N, K; cin >> N >> K;

	vector<int> Nums(N);
	
	for (int& num : Nums) {cin >> num;}
	
	for (int target; cin >> target;) {
		
		if(target < Nums.front() || Nums.back() < target){cout << "NO\n"; continue;}

		int Left = -1;
		int Right = N;

		while (1 != Right - Left) {

			const int mid = (Right + Left) / 2;

			if (target <= Nums[mid]) {
				Right = mid;
			}
			else {
				Left = mid;
			}
		}

		cout << ((Nums[Right] == target) ? "YES\n" : "NO\n");
	}
}
