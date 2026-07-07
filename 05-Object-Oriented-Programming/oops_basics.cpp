//--------------------------Object Oriented Programming----------------------------

//BASIC SYNTAX - With public
#include <iostream>
#include <string>
using namespace std;

class Teacher{
//ENCAPSULATION
public:
    //properties
    string name;
    string dept;
    string subject;
    double salary;
    
    //Methods
    void changeDept(string newDept){
         dept = newDept;
    }
};

class Student{
public:
    string name;
    string dept;
    int year;
    string studentID;
};

int main(){
    Teacher t1; //----------> Object Creation Line : Constructor Call
    t1.name = "Ananya";
    t1.dept = "CSE";
    t1.subject = "CS";
    t1.salary = 100000;

    cout << t1.name << endl;
    return 0;
}


//Public & Private
#include <iostream>
#include <string>
using namespace std;

class HOD{
private:
    double salary; // data hiding
public:
    string name;
    string dept;
    string subject;

    void changedept(string newDept){
        dept = newDept;
    }
};
int main(){
    HOD h1;
    h1.name = "Rakesh";
    h1.dept = "MECH";
    h1.subject = "Nuclear Emission";

    cout << h1.name << endl;
    return 0;
}


//Setter and Getter
#include <iostream>
#include <string>
using namespace std;

class HOD{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
    //Setter
    void changeSal(double s){
        salary = s;
    }
    //Getter
    double getSal(){
        return salary;
    }
};
int main(){
    HOD h1;
    h1.name = "Rakesh";
    h1.dept = "MECH";
    h1.subject = "Nuclear Emission";
    h1.changeSal(200000);
    cout << h1.name << endl;
    cout << " New Salary : " << h1.getSal() << endl;
    return 0;
}


//CONSTRUCTOR - cpp auto creates if programmer dint
//Program with constructor
#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    Account(){
        cout << "Hey, Im constructor" << endl;
    }
    string name;
    string dept;
    string subject;
    double salary;
    void changeDept(string newDept){
         dept = newDept;
    }
};
int main(){
    Account b1; //Constructor Call - Public line printed
    Account b2; // Public line printed again
    b1.name = "Ananya";
    b1.dept = "CSE";
    b1.subject = "CS";
    b1.salary = 100000;
    return 0;
}

//Assigning value to constructor
#include <iostream>
#include <string>
using namespace std;

class Bank{
public:
    //Non-Parameterized Query
    Bank(){
        dept = "Main Branch";
    }
    string name;
    string dept;
    double phone_number;
    void changeDept(int newDept){
        dept = newDept;
    }
};
int main(){
    Bank b1;
    b1.name = "SBI";
    b1.phone_number = 8852007155;
    cout << " Department is " << b1.dept << endl;
    return 0;
}


//PARAMETERIZED QUERY
#include <iostream>
#include <string>
using namespace std;

class Hospital{
//Parameterized Query
public:
    Hospital(string n, string b, int p ){
        name = n;
        branch = b;
        phone_no = p;
    }
    string name;
    string branch;
    int phone_no;

    void changeBranch(string newBranch){
        branch = newBranch;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Phone number : " << phone_no << endl;
    }
};
int main(){
    Hospital h1("RDH", "Malviya", 8852007155);
    h1.getInfo();
    return 0;
}


//MULTIPLE CONSTRUCTORS - Constructor overload --> Example of Polymorphism
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    float cgpa;
public:
    //Non parameterized Constructor - IGNORED
    Student(){ 
        name = "Raj";
    }
    //Parameterized Constructor 
    Student(string n, string r, float c){
        name = n;
        rollNO = r;
        cgpa = c;
    }
    string name;
    string rollNO;
    void showDetails(){
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNO << endl;
        cout << "CGPA : " << cgpa << endl;
    }
    float getCGPA(){
        return cgpa;
    }
};
int main(){
    Student b1("Ananya", "2025UCP1901", 8.75);
    b1.showDetails();
    return 0;
}


//*this = obj ... *this.prop = obj.prop
// or this ->prop 
//Both above point to current object
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    float cgpa;
public:
    //Works the same as normal
    Student(string name, string rollNO, float cgpa){
        this -> name = name;
        this -> rollNO = rollNO;
        this -> cgpa = cgpa;
    }
    string name;
    string rollNO;
    void showDetails(){
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNO << endl;
        cout << "CGPA : " << cgpa << endl;
    }
    float getCGPA(){
        return cgpa;
    }
};
int main(){
    Student b1("Ananya", "2025UCP1901", 8.75);
    b1.showDetails();
    return 0;
}


//Default Copy Constructor Invoke
//Command Ex : Teacher t2(t1);

//Custom Copy Constructor
//Command : Teacher(Teacher &orgObj);

#include <iostream>
#include <string>
using namespace std;

class Hotel{
private:
    float salary;
public:
    string name;
    string dept;
    //Main Constructor
    Hotel(string name, string dept, float salary){
        this -> name = name;
        this -> dept = dept;
        this -> salary = salary;
    } 
    //Copy Constructor
    Hotel(Hotel &obj){
        cout << "I am Custom Copy Constructor" << endl;
        this -> name = obj.name;
        this -> dept = obj.dept;
        this -> salary = obj.salary;
    }
    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
        cout << "Salary : " << salary << endl;
    }
    void setSal(float s){
        salary = s;
    }
    float getSal(){
        return salary;
    }
};
int main(){
    Hotel t1("ANanya", "CSE", 900000);
    Hotel t2(t1);
    t2.getInfo();
}


//Pointer
#include <iostream>
#include <string>
using namespace std;

class Airport{
public:
    string name;
    int* numPtr;
    Airport(string name, int num){
        this -> name = name;
        numPtr = new int;
        *numPtr = num;
    }
    //Copy Constructor (Deep Copy)
    Airport(Airport &obj){
        this -> name = obj.name;
        numPtr = new int;
        *numPtr = *(obj.numPtr);
    }
    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Number : " << *numPtr << endl;
    }
};
int main(){
    Airport a1("Air India", 2007155);
    Airport a2(a1);
    a1.getInfo();
    //New Value into Pointer
    *(a2.numPtr) = 91806729;
    a1.getInfo(); 
    a2.getInfo();
}


//DEEP COPY - When value assigned to a2 pointer doesnt change
//            root value and only a2 gets changed, not both
//SHALLOW COPY - When value assigned to a2 pointer changes root 
//               value and a1 also gets changed
