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
