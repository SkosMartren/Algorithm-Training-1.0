#include<iostream>

using namespace std;

int main () {

// input
int troom, tcond;
cin >> troom >> tcond;

string mode_operation_cond;
cin >> mode_operation_cond;

// solution and output
if (mode_operation_cond == "freeze" && tcond < troom) {
cout << tcond;
} else if (mode_operation_cond == "heat" && tcond > troom) {
cout << tcond;
} else if (mode_operation_cond == "auto") {
cout << tcond;
} else {
cout << troom;
}

return 0;
}
