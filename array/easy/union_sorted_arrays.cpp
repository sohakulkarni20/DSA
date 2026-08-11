#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unite_sorted_arrays(const vector<int>& v1, const vector<int>& v2) {

    vector<int> result;

    int a = 0, b = 0;

    while (a < v1.size() && b < v2.size()) {

        int x;

        if (v1[a] < v2[b]) {
            x = v1[a];
            a++;
        }
        else if (v2[b] < v1[a]) {
            x = v2[b];
            b++;
        }
        else {
            x = v1[a];
            a++;
            b++;
        }

        // Insert only if not already present
        if (result.empty() || result.back() != x)
            result.push_back(x);
    }

    // Remaining elements of v1
    while (a < v1.size()) {

        if (result.empty() || result.back() != v1[a])
            result.push_back(v1[a]);
            a++;
    }

    // Remaining elements of v2
    while (b < v2.size()) {

        if (result.empty() || result.back() != v2[b])
            result.push_back(v2[b]);

        b++;
    }

    return result;
}
vector <int> merge_this(vector <int> &v1, vector <int> &v2){
    //written on my own
    vector <int> result;
    int a=0, b=0;
    while (a< v1.size() && b<v2.size()){
        if(v1[a] < v2 [b]){
            result.push_back(v1[a]);
            a++;
        }
        else if(v2[b] < v1[a]){
            result.push_back(v2[b]);
            b++;
        }
        else if(v1[a] == v2[b]){
            result.push_back(v1[a]);
            a++;
            b++;
        }
    }

    if(a == v1.size() && b == v2.size()){
        return result;
    }
    
    while(a<v1.size()){
        result.push_back(v1[a]);
        a++;
    }
    
    while(b<v2.size()){
        result.push_back(v2[b]);
        b++;
    }

    return result;
}

vector<int> approach2(const vector<int>& v1, const vector<int>& v2) {

    set<int> s;

    // Insert all elements of first array
    for (int i = 0; i < v1.size(); i++) {
        s.insert(v1[i]);
    }

    // Insert all elements of second array
    for (int i = 0; i < v2.size(); i++) {
        s.insert(v2[i]);
    }

    // Convert set to vector
    vector<int> result(s.begin(), s.end());

    return result;
}

int main() {

    int size1, size2, var;

    vector<int> v1, v2;

    cout << "Enter size of sorted array 1: ";
    cin >> size1;

    cout << "Enter elements of sorted array 1:\n";

    for (int i = 0; i < size1; i++) {
        cin >> var;
        v1.push_back(var);
    }

    cout << "Enter size of sorted array 2: ";
    cin >> size2;

    cout << "Enter elements of sorted array 2:\n";

    for (int i = 0; i < size2; i++) {
        cin >> var;
        v2.push_back(var);
    }

    vector<int> union_arr = unite_sorted_arrays(v1, v2);

    cout << "\nUnion:\n";

    for (int i = 0; i < union_arr.size(); i++) {
        cout << union_arr[i] << " ";
    }

    cout << endl;

    return 0;
}