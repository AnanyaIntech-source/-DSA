//REVERSE VECTOR
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void revVector(vector<int>& vec){
    int start = 0, end = vec.size() - 1;
    while (start < end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
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
    cout << endl << "Vector in reverse is "; 
    revVector(v);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
