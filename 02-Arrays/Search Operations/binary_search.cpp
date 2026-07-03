//BINARY SEARCH ON SORTED ARRAY
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1;
    while (start <= end){
        int mid = (start + end)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int dat[] = {1,2,3,4,5,6,7,8};
    int s = sizeof(dat)/sizeof(dat[0]);
    int k;
    cout << "Enter element to search >> ";
    cin >> k;
    int result = binarySearch(dat,s,k);
    if (result != -1){
        cout << "element found at index " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}
