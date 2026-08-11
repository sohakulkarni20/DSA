#include <iostream>
#include <vector>
using namespace std;

int remove_dupliactes(vector <int> &v){
    int a=0, b=1;

    while(b<v.size()){
        if(v[a]==v[b]){
            b++;
        }
        else{
            a++;
            v[a] = v[b];
            b++;
        }
    }

    return a+1;
}

int main(){
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

    int limit = remove_dupliactes(arr);
    cout<<"New array: ";
    for(int i=0; i<limit; i++){
        cout<<arr.at(i)<<"\t";
    }

    
    
}