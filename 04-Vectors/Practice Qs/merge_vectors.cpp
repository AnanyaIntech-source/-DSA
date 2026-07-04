//Merge Vectors
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {5,4,3,2,1};
    cout << "Orginial Vector1 is ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl << "Orginial Vector2 is ";
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    v1.insert(v1.end(), v2.begin(), v2.end());
    cout << endl << "New Vector1 is ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    return 0;
}
