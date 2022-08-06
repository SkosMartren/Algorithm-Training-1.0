#include<iostream>

using namespace std;

// solution
bool check_triangle_inequality(const uint64_t a, const uint64_t b, const uint64_t c) {
	return a + b > c;
}

int main() {
	
	// input
	uint64_t x, y, z;
	cin >> x >> y >> z;
	
	// output
	if (check_triangle_inequality(x, y, z) && check_triangle_inequality(z, x, y) && check_triangle_inequality(y, z, x)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
