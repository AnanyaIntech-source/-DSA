//Write a C++ program to store integers in a vector and 
//find the largest element present in the vector.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    int largest = INT_MIN;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > largest){
            largest = v[i];
        }
    }
    cout << "Largest element in vector is " << largest << endl;
    return 0;
}
