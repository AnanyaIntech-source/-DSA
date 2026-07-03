//Enter Nth element, Enter 1st N elements, Find missing element
#include <iostream>
#include <vector>
using namespace std;

int checkNth(vector<int> &arr, int N) {
    int expectedSum = (N * (N + 1)) / 2;
    int actualSum = 0;
    for (int num : arr) {
        actualSum = actualSum + num;
    }
    if (actualSum == expectedSum)
        return -1;

    return (expectedSum - actualSum);
}

int main() {
    int N;
    cout << "Enter Nth Number: ";
    cin >> N;
    cout << "Enter " << N - 1 << " elements:" << endl;
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
        cout << endl << "No missing element";
    else
        cout << endl << "Missing element is " << result << endl;

    return 0;
}

