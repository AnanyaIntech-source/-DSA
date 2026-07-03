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
