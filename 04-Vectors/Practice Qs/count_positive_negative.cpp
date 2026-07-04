//COUNT TOTAL POSITIVE AND TOTAL NEGATIVE
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
    int count_p = 0, count_n = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] < 0){
            count_n++;
        }
        else if (v[i] == 0){
            count_p++;
        }
        else{
            count_p++;
        }
    }
    cout << endl << "Total Positive = " << count_p << endl;
    cout << "Total Negative = " << count_n << endl;
    return 0;
}
