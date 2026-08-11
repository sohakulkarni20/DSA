#include <iostream>
#include <vector>
using namespace std;
void stock_buysell(vector<int> &v){
    int index1=0;
    int index2 = 0;
    int buy =v[0]; 
    int sell=v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i] >= sell){
            sell = v[i];
            index2 = i;
        }
        else if(v[i] <= buy){
            buy = min(buy, v[i]);
            index1 = i;
        }
    }
    if(index2>index1){
        cout<<"Buy: "<<buy<<endl<<"Sell: "<<sell<<endl;
    }
    else{
        sell = 0;
        for(int i=buy; i<v.size(); i++){
            sell = max(sell, v[i]);
        }
    }
    cout<<"Buy: "<<buy<<endl<<"Sell: "<<sell<<endl;
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
    stock_buysell(arr);
    return 0;
}