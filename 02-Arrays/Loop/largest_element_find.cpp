//LARGEST element in ARRAY using LOOP
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int largest = INT_MIN;
    
    for (int i = 0; i < 6; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest element in array is >> " << largest << endl;
    return 0;
}
