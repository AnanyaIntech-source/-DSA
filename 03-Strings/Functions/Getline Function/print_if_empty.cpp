//Print if empty string using getline
#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    while (getline(cin,line)){
        if (!line.empty()){
            cout << "The string is " << line << endl;
        }
        else {
            cout << "The string is empty!" << endl;
        }
    }
    return 0;
}
