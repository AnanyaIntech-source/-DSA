//----------------------------------RECURSION-----------------------------------

//NORMAL RECURSION FUNCTN. - Print N to 1;
#include <iostream>
using namespace std;

void printRevN(int N){
    if (N == 0){
        return;
    }
    cout << N << " ";
    printRevN(N - 1);
}
int main(){
    int num;
    cout << "Enter Nth number : ";
    cin >> num;
    printRevN(num);
    return 0;
}


//BACKTRACKING - Print 1 to N 
#include <iostream>
using namespace std;

void printTillN(int N){
    if (N == 0){
        return;
    }
    printTillN(N - 1);
    cout << N << " "; //Statement After Function call - BACKTRACKING
}
int main(){
    int num;
    cout << "Enter Nth number : ";
    cin >> num;
    printTillN(num);
    return 0;
}


//Sum of N natural Numbers
#include <iostream>
using namespace std;

void sumN(int num, int sum){
    if (num == 0){
        cout << "Total Sum = " << sum << endl;
        return;
    }
    sum = sum + num;
    sumN(num - 1, sum);
}
int main(){
    int N;
    cout << "ENter Nth number : ";
    cin >> N;
    sumN(N,0);
    return 0;
}


//Power x^n
#include <iostream>
using namespace std;

int powerXN(int X, int N){
    if (N == 0){
        return 1;
    }
    return X * powerXN(X, N - 1);
}
int main(){
    int x;
    cout << "ENter number x : ";
    cin >> x;
    int n;
    cout << endl << "Enter power n : ";
    cin >> n;
    int result = powerXN(x,n);
    cout << endl << "Ans = " << result << endl;
    return 0;
}


//nth FIBONACCI Number
#include <iostream>
using namespace std;

int fibonacciSeries(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}
int main(){
    int num;
    cout << "ENter nth number : ";
    cin >> num;
    int result = fibonacciSeries(num);
    cout << endl << "Result = " << result;
    return 0;
}


//Factorial Number
#include <iostream>
using namespace std;

int factorialNum(int n){
    if (n == 0){
        return 1;
    }
    else if(n == 1){
        return 1;
    }
    return n * factorialNum(n - 1);
}
int main(){
    int num;
    cout << "ENter nth number : ";
    cin >> num;
    int result = factorialNum(num);
    cout << endl << "Result = " << result;
    return 0;
}


//String reverse 
#include <iostream>
#include <string>
using namespace std;

void revString(string &str, int start, int end){
    if (start >= end){
        return;
    }
    swap(str[start],str[end]);
    revString(str,start + 1,end - 1); 
}
int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    revString(str,0,str.length() - 1);
    cout << endl << "Reversed String : " << str << endl;
}





//------------------------------RECURSION TREE--------------------------------

//Merge Sort Function
#include <iostream>
#include <vector>
using namespace std;

//Merge Function
void mergeFunc(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    //Compare both sides and merge into seperate, temp
    while(i <= mid && j <= end){
        if (arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //Left Half Check - to check remaining elements in left half
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    //Right Half - to check remaining elements in right half
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    //Copy sorted temp into original
    for (int index = 0; index < temp.size(); index++){
        arr[index + start] = temp[index];
    }
}

//Merge Sort Function
void mergeSortFunc(vector<int> &arr, int start, int end){
    //Base Case
    if (start >= end){
        return;
    }
    //Mid formula
    int mid = start + (end - start)/2;
    //Left half sort
    mergeSortFunc(arr,start,mid);
    //Right half sort
    mergeSortFunc(arr,mid + 1,end);
    //Merge Both halves
    mergeFunc(arr,start,mid,end);
}
int main(){
    vector<int> arr = {24,35,14,14,12,56};
    cout << "Original Array >> " << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    //Merge Sort
    mergeSortFunc(arr,0,arr.size() - 1);
    cout << "Sorted Array >> " << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}


//Binary Search Using Recursion
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int target){
    //Base Case
    if (start > end){
        return -1;
    }
    int mid = start + (end - start)/2;
    //Middle element check
    if (arr[mid] == target){
        return mid;
    }
    //left half search
    else if (target < arr[mid]){
        return binarySearch(arr,start,mid - 1,target);
    }
    //right half search
    else{
        return binarySearch(arr,mid + 1,end,target);
    }
}
int main(){
    vector<int> arr = {23,46,85,64,72,91};
    cout << "Original Array >> ";
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    int target;
    cout <<endl << "Enter Element to search >> ";
    cin >> target;
    int result = binarySearch(arr,0,arr.size() - 1,target);
    if (result == -1){
        cout << endl << "Element not found " << endl;
    }
    else{
        cout << endl << "Element found at index " << result << endl;
    }
}
 
