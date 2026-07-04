//SIZE VS CAPACITY DIFF (Vector doubles capacity : 1 >> 2 >> 4 >> ..)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Current Size of the vector = " << v.size() << endl;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    cout << "After Push_back, Size of the vector = " << v.size() << endl;
    cout << "After Push_back, Capactiy of Vector = " << v.capacity() << endl; 
    return 0;
}
