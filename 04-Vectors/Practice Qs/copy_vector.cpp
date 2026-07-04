//COPY VECTOR
#include <iostream>
#include <vector>
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
    vector<int> vc;
    //COPYING VECTOR
    for (int i : v){
        vc.push_back(i);
    }
    //PRINTING COPY VECTOR
    cout << endl << "Copy Vector is ";
    for (int i = 0; i < vc.size(); i++){
        cout << vc[i] << " ";
    }
    return 0;
}
