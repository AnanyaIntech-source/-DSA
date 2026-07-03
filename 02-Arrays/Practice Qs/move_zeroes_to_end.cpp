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

