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
