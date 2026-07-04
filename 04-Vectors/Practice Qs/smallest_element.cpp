//SMALLEST ELEMENT IN VECTOR
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

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
    int smallest = INT_MAX;
    for (int i = 0; i < v.size(); i++){
        if (v[i] < smallest){
            smallest = v[i];
        }
    }
    cout << endl << "SMallest element = " << smallest << endl;
    return 0;
}

