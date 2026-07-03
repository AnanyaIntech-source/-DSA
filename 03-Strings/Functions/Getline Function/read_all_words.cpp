//Read All Words - STRING USING GETLINE
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while (getline(cin,str)){
        cout << str << " ";
    }
    return 0;
}
