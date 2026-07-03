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
