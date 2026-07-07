//--------------------------------VECTORS-------------------------------------

//Basic Syntax
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //To create a vector; size = 0
    vector<int> vec = {1,2,3}; //size = 3
    vector<int> vec(3,0); //create vector of (size, index)
}


//INSERT ELEMENTS IN VECTOR
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//INSERT ELEMENTS AND DISPLAY SIZE 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Current Size of the vector = " << v.size() << endl;
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    cout << "After Push_back, Size of the vector = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}


//SIZE VS CAPACITY DIFF (Vector doubles capacity : 1 >> 2 >> 4 >> ..)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << "Current Size of the vector = " << v.size() << endl;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    cout << "After Push_back, Size of the vector = " << v.size() << endl;
    cout << "After Push_back, Capactiy of Vector = " << v.capacity() << endl; 
    return 0;
}


//SORT FUNCTION
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {5,2,3,1,4};
    cout << "Before Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.begin(),v.end());
    cout << endl << "After Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}


//REVERSE SORT FUNCTION
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {5,2,3,1,4};
    cout << "Before Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v.rbegin(),v.rend());
    cout << endl << "After Sorting " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}

