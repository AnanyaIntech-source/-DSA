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

