//Compare length of strings
#include <iostream>
using namespace std;

int main(){
    string l1 = "Phone";
    string l2 = "Telephone";
    string l3 = "Telephone Booth";

    if (l1 > l2 && l1 > l3){
        cout << l1 << " is the largest" << endl;
    }
    else if (l2 > l1 && l2 > l3){
        cout << l2 << " is the largest" << endl;
    }
    else{
        cout << l3 << " is the largest" << endl;
    }
    
    return 0;
}
