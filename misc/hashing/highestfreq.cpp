#include <bits/stdc++.h>
using namespace std;

// Function to count frequency of each element in the array using unordered_map
void highestFrequency(int arr[], int n) {
    // Create an unordered_map to store frequency of each element
    unordered_map<int, int> map;

    // Traverse the array and count frequencies
    for (int i = 0; i < n; i++) {
        map[arr[i]]++;
    }

    // Traverse through the unordered_map and print frequencies
    cout<<"Key\tFrequency"<<endl;
    for (auto x : map) {
        cout << x.first << "\t" << x.second << endl;
    }
}

int main() {
    // Input array
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Index "<<i<<": ";
        cin>>arr[i];
    }
    n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to count frequencies
    highestFrequency(arr, n);
    return 0;
}
