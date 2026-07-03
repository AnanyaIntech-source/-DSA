//LINEAR SEARCH ON ARRAY - Find the index of the element 8 (Time Complexity = O(n))
#include <iostream>
using namespace std;

void searchElement(int dat[], int s, int val){
    for (int i = 0; i < s; i++){
        if (dat[i] == val){
            cout << "Index of the element is " << i << endl;
        }
    }
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int element = 8;
    searchElement(arr, size, element);
}
