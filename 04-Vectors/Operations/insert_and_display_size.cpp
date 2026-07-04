//INSERT ELEMENTS AND DISPLAY SIZE 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Current Size of the vector = " << v.size() << endl;
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    cout << "After Push_back, Size of the vector = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}
