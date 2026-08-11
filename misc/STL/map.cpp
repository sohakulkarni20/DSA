#include <iostream>
#include <map>
using namespace std;

int main() {

    // Declaration
    map<int, int> mpp;

    // Insertion
    mpp[1] = 10;
    mpp[2] = 20;
    mpp.emplace(3, 30);
    mpp.insert({4, 40});

    // Printing the map
    cout << "Map elements:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Accessing elements
    cout << "\nValue at key 2: " << mpp[2] << endl;

    // Finding an element
    auto it = mpp.find(3);

    if (it != mpp.end()) {
        cout << "Found key 3 with value " << it->second << endl;
    }

    // Count (returns 1 if key exists, else 0)
    cout << "Count of key 4: " << mpp.count(4) << endl;

    // Size
    cout << "Size of map: " << mpp.size() << endl;

    // Erasing by key
    mpp.erase(2);

    cout << "\nAfter erasing key 2:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Erasing by iterator
    mpp.erase(mpp.find(3));

    cout << "\nAfter erasing key 3:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Check if empty
    cout << "\nIs map empty? " << mpp.empty() << endl;

    // Clear map
    mpp.clear();

    cout << "Size after clear(): " << mpp.size() << endl;

    return 0;
}