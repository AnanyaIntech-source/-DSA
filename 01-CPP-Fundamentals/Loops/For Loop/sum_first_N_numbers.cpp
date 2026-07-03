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
