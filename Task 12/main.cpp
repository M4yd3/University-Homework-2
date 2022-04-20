#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> list;
    int input{ 0 };

    cout << "Enter a sequence of integers ending with 0: " << endl;

    do {
        if (input != 0) list.push_back(input);
        if (!cin) {
            input = 1;
            continue;
        }
        cin >> input;
    } while (input != 0);

    if (list.empty()) {
        cout << "Your sequence is empty. Terminating...";
        return -1;
    }

    cout << "Here is your sequence before sorting: " << endl;
    for (int i : list) cout << i << " ";

    sort(list.begin(), list.end());

    cout << "Here is your sorted sequence: " << endl;
    for (int i : list) cout << i << " ";
}