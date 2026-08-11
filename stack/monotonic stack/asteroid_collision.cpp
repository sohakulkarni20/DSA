#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    cout << "Enter sizes of asteroids" << endl << "Enter 440 to stop" << endl;

    vector<int> asteroids;
    int var;

    for(int i=0; i<100; i++){
        cout << "Index " << i << ": ";
        cin >> var;
        if(var == 440) break;
        asteroids.push_back(var);
    }

    stack<int> s;

    int i = 0;

    while(i < asteroids.size()){

        if(s.empty()){
            s.push(asteroids[i]);
            i++;
            continue;
        }

        if(asteroids[i] == 0){
            i++;
            continue;
        }

        // Same direction
        if((asteroids[i] > 0 && s.top() > 0) ||
           (asteroids[i] < 0 && s.top() < 0)){
            s.push(asteroids[i]);
            i++;
            continue;
        }

        // Away from each other
        if(s.top() < 0 && asteroids[i] > 0){
            s.push(asteroids[i]);
            i++;
            continue;
        }

        // Collision (+ on stack, - incoming)

        while(!s.empty() &&
              s.top() > 0 &&
              abs(asteroids[i]) > abs(s.top()))
        {
            s.pop();
        }

        if(s.empty()){
            s.push(asteroids[i]);
            i++;
            continue;
        }

        if(s.top() < 0){
            s.push(asteroids[i]);
            i++;
            continue;
        }

        if(abs(asteroids[i]) == abs(s.top())){
            s.pop();
            i++;
            continue;
        }

        if(abs(asteroids[i]) < abs(s.top())){
            i++;
            continue;
        }
    }

    if(s.empty()){
        cout << "[]" << endl;
        return 0;
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout << "[";

    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i];
        if(i != 0) cout << ", ";
    }

    cout << "]";

    return 0;
}