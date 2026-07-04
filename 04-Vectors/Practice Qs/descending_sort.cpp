//Write a C++ program to store integers in a vector, 
//sort them in descending order using STL sort(), and 
//print the sorted vector.
#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(v.rbegin(),v.rend());
    cout << endl << "Reverse Sorted Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
