//-----------------------------------LOOPS-----------------------------------

//While Function (Sum of first 10 numbers)
#include <iostream>
using namespace std;

int main(){
    int count = 1, sum = 0;
    while (count <= 10){
        sum = sum + count;
        count++;
    }
    cout << "Sum of numbers 1 to 10 are " << sum << endl;
    return 0;
}


//While Function (Printing upto 5)
#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i <= 5){
        cout << i << endl;
        i++;
    }
    return 0;
}


//For Function (Sum of 1st N numbers entered by user)
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 0;
    cout << "Enter a number = " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "Sum of 1st " << n << " numbers = " << sum << endl;
    return 0;
}
