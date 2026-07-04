//Write a C++ program to input elements into a vector and 
//print the vector in reverse order without modifying the original vector.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl << "Reverse Order Vector is ";
    for (int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
    return 0;
}
