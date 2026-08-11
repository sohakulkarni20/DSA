#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(100);

    multiset<int> temp = ms;

    while (!temp.empty()) {
        cout << *temp.begin() << endl;
        temp.erase(temp.begin());
    }

    cout << "Count of 1 = " << ms.count(1) << endl;

    // Remove one occurrence
    ms.erase(ms.find(1));

    cout << "Count of 1 after erasing one occurrence = "
         << ms.count(1) << endl;

    // Remove all occurrences
    ms.erase(1);

    cout << "Count of 1 after erasing all occurrences = "
         << ms.count(1) << endl;

    return 0;
}