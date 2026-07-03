//If-Else Condition (Check if user input no. is >, == or < than 10)
#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "Enter a number = " << endl;
    cin >> num;
    if (num > 10){
        cout << "Number is greater than 10" << endl;
    }
    else if (num == 10){
        cout << "Number equals to 10" << endl;
    }
    else{
        cout << "Number is lesser than 10" << endl;
    }
    return 0;
}
