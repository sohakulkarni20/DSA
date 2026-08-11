#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(vector<int>& ar) {

    if (ar.size() == 0 || ar.size() == 1) {
        return;
    }

    int a = 0; // points to last unique element

    for (int b = 1; b < ar.size(); b++) {

        // Found a new unique element
        if (ar[b] != ar[a]) {
            a++;
            ar[a] = ar[b];
        }
    }

    cout << "New vector: ";

    // Print all unique elements
    for (int i = 0; i <= a; i++) {
        cout << ar[i] << " ";
    }

    cout << endl;
}

int main() {

    cout << "Enter size of array: ";
    int size;
    cin >> size;

    vector<int> arr;
    int v;

    cout << "Enter values in sorted manner:\n";

    for (int i = 0; i < size; i++) {
        cout << "At index " << i << " : ";
        cin >> v;
        arr.push_back(v);
    }

    cout << "Original vector: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    remove_duplicates(arr);

    return 0;
}