//Write a C++ program to input N integers from the user into a vector 
//and print all elements of the vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    cout << "Enter elements = " << endl;
    int N;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Final Vector = " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
