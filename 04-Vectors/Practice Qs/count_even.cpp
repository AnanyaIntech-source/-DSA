//Total Even Occurences
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
    int count = 0;
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        if (v[i] % 2 == 0){
            count++;
        }
    }
    cout << endl << "Total Number of Even occurences = " << count << endl;
    return 0;
}
