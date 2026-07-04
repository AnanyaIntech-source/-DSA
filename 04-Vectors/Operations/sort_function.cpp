//SORT FUNCTION
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {5,2,3,1,4};
    cout << "Before Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.begin(),v.end());
    cout << endl << "After Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
