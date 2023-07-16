#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N, K; cin >> N >> K;

	vector<int> Nums(N);
	
	for (int& num : Nums) {cin >> num;}

	int target;
	while (cin >> target) {
		
		if(target < Nums.front()){
			cout << Nums.front() << '\n'; continue;
		}

		if (Nums.back() < target) {
			cout << Nums.back() << '\n'; continue;
		}

		int Left = -1;
		int Right = N;

		while (1 != Right - Left) {

			int mid = (Right + Left) / 2;

			if (target <= Nums[mid]) {
				Right = mid;
			}
			else {
				Left = mid;
			}
		}


		if (Nums[Right] == target || Nums[Right] - target < target - Nums[Left]) {
			cout << Nums[Right] << '\n';
		}
		else {
			cout << Nums[Left] << '\n';
		}
	}
}
