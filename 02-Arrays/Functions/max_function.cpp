//LARGEST element in ARRAY using max FUNCTION
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int largest = INT_MIN;
    
    for (int i = 0; i < 6; i++){
        largest = max(arr[i], largest);
    }

    cout << "Largest element in array is >> " << largest << endl;
    return 0;
}
