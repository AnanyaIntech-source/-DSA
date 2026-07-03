//Reversing ARRAY without SWAP
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,0,2,0,3,0,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> rev(size);
    cout << "Original Array >> " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    int n = 0;
    for (int i = size - 1; i >= 0; i--){
        rev[n] = arr[i];
        n++;
    }
    cout << endl << "New Array >> " << endl;
    for (int i = 0; i < size; i++){
      cout << rev[i] << " ";  
    }
    return 0;
}


