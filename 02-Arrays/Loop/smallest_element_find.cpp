//SMALLEST Element in ARRAY using LOOP
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int smallest = INT_MAX;
    
    for (int i = 0; i < 6; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Smallest element in array is >> " << smallest << endl;
    return 0;
}
