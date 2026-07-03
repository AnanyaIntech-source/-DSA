//REVERSE on ARRAY (Time Complexity = O(n))
#include <iostream>
using namespace std;

void revArray(int dat[], int s){
    int start = 0, end = s - 1;
    while (start < end){
        swap(dat[start],dat[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int size = 4;

    cout << "Old Array >>> ";
    //Printing Old Array
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    revArray(arr, size);

    cout << endl << "New Array >>> ";
    //Printing New Array
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
