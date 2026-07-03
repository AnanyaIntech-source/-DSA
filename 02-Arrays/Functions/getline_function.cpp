//Continuously takes string input from the user using getline()
//Stops when the user enters an empty line
//For every non-empty string:
//                          print the string inside [ ]
//                          print its length
//                          check whether its length is greater than 5 or not
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        if (str.empty()){
            break;
        }
        cout << "[" << str << "]" << endl;
        cout << "Length = " << str.size() << endl;
        if (str.size()>5){
            cout << "Large String" << endl;
        }
        else{
            cout << "Small String" << endl;
        }
    }
    return 0;
}
