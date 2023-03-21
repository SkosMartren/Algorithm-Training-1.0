#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> Nodes;
    while (true) {
        int data;
        cin >> data;

        if (data == 0) { break; }

        Nodes.insert(data);
    }

    for (int node : Nodes) {
        cout << node << '\n';
    }
    return 0;

}
