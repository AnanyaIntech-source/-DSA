//---------------------------------STRINGS-------------------------------------

//Read 1st word - STRING
#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    cout << str;
    return 0;
}


//Read 2 words - STRING
#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << " " << str2 << endl;
    return 0;
}


//Read All Words - STRING
#include <iostream>
using namespace std;

int main(){
    string str;
    while (cin >> str){
        cout << str << " ";
    }
    return 0;
}

// ---------------------------SPECIAL FUNCTIONS-------------------------------

//Read All Words - STRING USING GETLINE
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while (getline(cin,str)){
        cout << str << " ";
    }
    return 0;
}


//Print if empty string using getline
#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    while (getline(cin,line)){
        if (!line.empty()){
            cout << "The string is " << line << endl;
        }
        else {
            cout << "The string is empty!" << endl;
        }
    }
    return 0;
}


//Calculate string size using size function
#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    while (getline(cin,line)){
        auto len = line.size();
        cout << "Length of this line is " << len << endl;
    }
    return 0;
}


//Compare length of strings
#include <iostream>
using namespace std;

int main(){
    string l1 = "Phone";
    string l2 = "Telephone";
    string l3 = "Telephone Booth";

    if (l1 > l2 && l1 > l3){
        cout << l1 << " is the largest" << endl;
    }
    else if (l2 > l1 && l2 > l3){
        cout << l2 << " is the largest" << endl;
    }
    else{
        cout << l3 << " is the largest" << endl;
    }
    
    return 0;
}


//Copying String
#include <iostream>
using namespace std;

int main(){
    string l = "dev";
    string copy = l;
    cout << "Copied line is >> " << copy << endl;
    return 0;
}


//New String
#include <iostream>
using namespace std;

int main(){
    string n(3,'E');
    cout << "New line is >> " << n << endl;
    return 0;
}

