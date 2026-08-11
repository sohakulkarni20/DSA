#include <iostream>
#include <vector>
using namespace std;
vector <int> merge_this(vector <int> &v1, vector <int> &v2){
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
int main(){
    cout << "Enter size of array1: ";
    int size1;
    cin >> size1;
    vector<int> arr1;
    int v;
    cout << "Enter values in sorted manner:\n";
    for (int i = 0; i < size1; i++) {
        cout << "At index " << i << " : ";
        cin >> v;
        arr1.push_back(v);
    }
    cout << endl;
    cout << "Enter size of array2: ";
    int size2;
    cin >> size2;
    vector<int> arr2;
    cout << "Enter values in sorted manner:\n";
    for (int i = 0; i < size2; i++) {
        cout << "At index " << i << " : ";
        cin >> v;
        arr2.push_back(v);
    }

    vector <int> result;
    result = merge_this(arr1, arr2);
    for (int i = 0; i < result.size(); i++) {
        cout <<i << " : "<<result[i]<<endl;
    }
    return 0;
}