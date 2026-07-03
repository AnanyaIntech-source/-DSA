//Size of ARRAY (Base)
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {99, 90, 92, 94, 95};

    int size = sizeof(arr);
    cout << "Memory Size Direct (Total Bytes)>> " << size << endl;

    int number_of_elements = sizeof(arr)/sizeof(arr[0]);
    cout << "No. of elements (Actual Size) >> " << number_of_elements << endl;

    int last_index = number_of_elements - 1;
    cout << "Bytes w Formula >> " << number_of_elements*last_index << endl;

    return 0;
}
