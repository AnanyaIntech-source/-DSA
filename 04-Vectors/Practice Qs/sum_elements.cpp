//Write a C++ program to input elements into a vector and 
//calculate the sum of all elements.
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
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    cout << "Sum of all elements is " << sum << endl;
    return 0;
}
