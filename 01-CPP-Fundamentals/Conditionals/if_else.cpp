//If-Else (Check if user input number greater than 10)
#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "Enter a Number = " << endl;
    cin >> num;
    if (num > 10){
        cout << "Number greater than 10" << endl;
    }
    else{
        cout << "Number lesser than 10" << endl;
    }
    return 0;
}
