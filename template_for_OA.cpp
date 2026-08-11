#include <bits/stdc++.h>
using namespace std;

int functiondemo(vector<int> demo, int temp){
    return temp;
}

int main(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    string temp;
    vector<int> vectorofnumbers;

    while(getline(ss, temp, ',')){
        vectorofnumbers.push_back(stoi(temp));
    }

    int digits;
    cin>>digits;

    cout<<functiondemo(vectorofnumbers, digits);

    return 0;
}