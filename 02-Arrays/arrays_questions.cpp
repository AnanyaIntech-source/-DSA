//-----------------------------ARRAYS QUESTIONS-------------------------------------

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


//SUM PAIR - FInd pair of elements that sum upto entered number
#include <iostream>
using namespace std;

int sumFind(int arr[], int size, int se){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] + arr[j] == se){
                cout << arr[i] << " + " << arr[j] << " = " << se;
                return 0;
            }
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,4,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int se;
    cout << "Enter Number : ";
    cin >> se;

    int result = sumFind(arr,size,se);
    if (result == -1){
        cout << endl << "Summing to " << se << " is not possible" << endl;
    }
    return 0;
}


//Enter Nth element, Enter 1st N elements, Find missing element
#include <iostream>
#include <vector>
using namespace std;

int checkNth(vector<int> &arr, int N) {
    int expectedSum = (N * (N + 1)) / 2;
    int actualSum = 0;
    for (int num : arr) {
        actualSum += num;
    }
    if (actualSum == expectedSum)
        return -1;

    return expectedSum - actualSum;
}

int main() {
    int N;
    cout << "Enter Nth Number: ";
    cin >> N;
    cout << "Enter " << N - 1 << " elements:\n";
    vector<int> arr(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> arr[i];
    }

    cout << "Current Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    int result = checkNth(arr, N);
    if (result == -1)
        cout << "\nNo missing element\n";
    else
        cout << "\nMissing element is " << result << endl;

    return 0;
}


//Find 2nd Largest Element in Array
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "2nd Largest Element is " << arr[1];

    return 0;
}


//Frequency of Every Element
#include <iostream>
#include <vector>
using namespace std;

void countFreq(vector<int> &arr, int size) {
    vector<int> visited(size, 0);
    
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;
    vector<int> arr(N);
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    countFreq(arr, N);
    return 0;
}


//Move all zeroes to the end
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    // Move non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < size) {
        arr[index++] = 0;
    }
    cout << "Updated Array >>\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


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


