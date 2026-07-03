//Calculate string size using size function
#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    while (getline(cin,line)){
        auto len = line.size();
        cout << "Length of this line is " << len << endl;
    }
    return 0;
}
