//2nd Largest Element
#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < v.size(); i++){
        if (i == 1){
            cout << endl << "2nd LArgest Element is " << v[i] << endl;
        }
    }
    return 0;
}
