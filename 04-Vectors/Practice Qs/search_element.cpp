//Write a C++ program to search for a given element in a vector and print its index. 
//If not found, print -1.
#include <iostream>
#include <vector>
using namespace std;

int searchElement(vector<int> vec, int s){
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == s){
            cout << "Index element found is " << i << endl;
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> v;
    int N;
    cout << "Enter number of elements >> ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    int ele;
    cout << "Enter Element to search >> ";
    cin >> ele;
    if (searchElement(v,ele) == -1){
        cout << "Element not found" << endl;
    }
    return 0;
}
