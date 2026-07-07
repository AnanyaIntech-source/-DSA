//-----------------------------ARRAYS--------------------------------

//Updating Element in ARRAY
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {99, 90, 92, 94, 95};
    arr[0] = 101;
    cout << "Updated Marks >> " << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    return 0;
}


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


//ARRAY Creation & Display using LOOP
#include <iostream>
using namespace std;

int main(){
    //Creating Array of Size 5
    const int size = 5;
    int marks[size];
    //Accepting elements from user using loop
    for (int i = 0; i < 5; i++){
        cout << "Enter an element >> ";
        cin >> marks[i];
    }
    //Displaying elements using loop
    for (int j = 0; j < 5; j++){
        cout << "New Marks Array >> " << endl;
        cout << marks[j] << endl;
    }
    return 0;
}


//SMALLEST Element in ARRAY using LOOP
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int smallest = INT_MAX;
    
    for (int i = 0; i < 6; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Smallest element in array is >> " << smallest << endl;
    return 0;
}


//LARGEST element in ARRAY using LOOP
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int largest = INT_MIN;
    
    for (int i = 0; i < 6; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest element in array is >> " << largest << endl;
    return 0;
}


//SMALLEST element in ARRAY using min FUNCTION
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int smallest = INT_MAX;
    
    for (int i = 0; i < 6; i++){
        smallest = min(arr[i],smallest);
    }

    cout << "Smallest element in array is >> " << smallest << endl;
    return 0;
}


//LARGEST element in ARRAY using max FUNCTION
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5, 15, 22, 1, -15, -24};
    int largest = INT_MIN;
    
    for (int i = 0; i < 6; i++){
        largest = max(arr[i], largest);
    }

    cout << "Largest element in array is >> " << largest << endl;
    return 0;
}


//Continuously takes string input from the user using getline()
//Stops when the user enters an empty line
//For every non-empty string:
//                          print the string inside [ ]
//                          print its length
//                          check whether its length is greater than 5 or not
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        if (str.empty()){
            break;
        }
        cout << "[" << str << "]" << endl;
        cout << "Length = " << str.size() << endl;
        if (str.size()>5){
            cout << "Large String" << endl;
        }
        else{
            cout << "Small String" << endl;
        }
    }
    return 0;
}


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

//-------------------------------------------------------
//Linear Search TIme Complexity = O(n)
//Binary Search Time Complexity = O(log n)
// Reverse TIme Complexity = O(n)
//--------------------------------------------------------

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


//REVERSE PRINT ARRAY
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = size - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
