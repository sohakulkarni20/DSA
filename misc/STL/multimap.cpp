#include <iostream>
#include <map>
using namespace std;

int main() {

    // Declaration
    multimap<int, int> mm;

    // Insertion
    mm.insert({1, 10});
    mm.insert({2, 20});
    mm.insert({1, 15});
    mm.emplace(2, 25);
    mm.emplace(3, 30);

    // Print all elements
    cout << "Multimap elements:\n";
    for (auto it : mm) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Count occurrences of a key
    cout << "\nCount of key 1: " << mm.count(1) << endl;

    // Find first occurrence of a key
    auto it = mm.find(2);
    if (it != mm.end()) {
        cout << "First value with key 2: " << it->second << endl;
    }

    // Print all values associated with key 2
    cout << "\nValues corresponding to key 2:\n";
    auto range = mm.equal_range(2);

    for (auto i = range.first; i != range.second; i++) {
        cout << i->second << endl;
    }

    // Erase all entries with key 1
    mm.erase(1);

    cout << "\nAfter erasing key 1:\n";
    for (auto it : mm) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Size
    cout << "\nSize: " << mm.size() << endl;

    // Clear
    mm.clear();

    cout << "Size after clear(): " << mm.size() << endl;

    return 0;
}