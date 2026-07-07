//-----------------------------VECTORS QUESTIONS-------------------------------------

//Write a C++ program to input N integers from the user into a vector 
//and print all elements of the vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    cout << "Enter elements = " << endl;
    int N;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Final Vector = " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//Write a C++ program to create a vector containing 10, 20, 30, 40, 50 
// and print all elements using:
// indexed loop
// for - each loop
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    //Indexed loop
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    //For-each loop
    cout << endl;
    for (int i : v){
        cout << i << " ";
    }
    return 0;
}


//Write a C++ program to store integers in a vector and 
//find the largest element present in the vector.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    int largest = INT_MIN;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > largest){
            largest = v[i];
        }
    }
    cout << "Largest element in vector is " << largest << endl;
    return 0;
}


//Write a C++ program to input elements into a vector and 
//calculate the sum of all elements.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    cout << "Sum of all elements is " << sum << endl;
    return 0;
}


//Write a C++ program to input elements into a vector and 
//print the vector in reverse order without modifying the original vector.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl << "Reverse Order Vector is ";
    for (int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
    return 0;
}


//Write a C++ program to store integers in a vector, 
//sort them in ascending order using STL sort(), and 
//print the sorted vector.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.begin(),v.end());
    cout << endl << "Sorted Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//Write a C++ program to store integers in a vector, 
//sort them in descending order using STL sort(), and 
//print the sorted vector.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.rbegin(),v.rend());
    cout << endl << "Reverse Sorted Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//Total Even Occurences
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter elements >> " << endl;
    while (cin >> N){
        v.push_back(N);
    }
    int count = 0;
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        if (v[i] % 2 == 0){
            count++;
        }
    }
    cout << endl << "Total Number of Even occurences = " << count << endl;
    return 0;
}


//Write a C++ program to search for a given element in a vector and print its index. 
//If not found, print -1.
#include <iostream>
#include <vector>
using namespace std;

int searchElement(vector<int> vec, int s){
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == s){
            cout << "Index element found is " << i << endl;
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> v;
    int N;
    cout << "Enter number of elements >> ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    int ele;
    cout << "Enter Element to search >> ";
    cin >> ele;
    if (searchElement(v,ele) == -1){
        cout << "Element not found" << endl;
    }
    return 0;
}


//REVERSE VECTOR
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void revVector(vector<int>& vec){
    int start = 0, end = vec.size() - 1;
    while (start < end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl << "Vector in reverse is "; 
    revVector(v);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//SMALLEST ELEMENT IN VECTOR
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    int smallest = INT_MAX;
    for (int i = 0; i < v.size(); i++){
        if (v[i] < smallest){
            smallest = v[i];
        }
    }
    cout << endl << "SMallest element = " << smallest << endl;
    return 0;
}


//COUNT TOTAL POSITIVE AND TOTAL NEGATIVE
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    int count_p = 0, count_n = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] < 0){
            count_n++;
        }
        else if (v[i] == 0){
            count_p++;
        }
        else{
            count_p++;
        }
    }
    cout << endl << "Total Positive = " << count_p << endl;
    cout << "Total Negative = " << count_n << endl;
    return 0;
}


//COPY VECTOR
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    vector<int> vc;
    //COPYING VECTOR
    for (int i : v){
        vc.push_back(i);
    }
    //PRINTING COPY VECTOR
    cout << endl << "Copy Vector is ";
    for (int i = 0; i < vc.size(); i++){
        cout << vc[i] << " ";
    }
    return 0;
}


//2nd Largest Element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int N;
    cout << "Enter Number of Elements = ";
    cin >> N;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Orginial Vector is ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < v.size(); i++){
        if (i == 1){
            cout << endl << "2nd LArgest Element is " << v[i] << endl;
        }
    }
    return 0;
}


//Merge Vectors
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {5,4,3,2,1};
    cout << "Orginial Vector1 is ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl << "Orginial Vector2 is ";
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    v1.insert(v1.end(), v2.begin(), v2.end());
    cout << endl << "New Vector1 is ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    return 0;
}
