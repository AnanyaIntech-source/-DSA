//-------------------------------OOPS QUESTIONS--------------------------------------

//Q1
//Create a class Employee.
// Public: name, department, salary
// Constructor should print:
// Employee Record Created
// Method: displayInfo()
// Create two employee objects and print their details
#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    Employee(string n, string d, int s){
        cout << "Employee Record Created" << endl;
        name = n;
        dept = d;
        salary = s;
    }
    string name;
    string dept;
    int salary;

    void changeDept(string newDept){
        dept = newDept;
    }
    void displayInfo(){
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "Salary : " << salary << endl; 
    }
};
int main(){
    Employee e1("Ananya", "CSE", 50000);
    Employee e2("Rahul", "IT", 60000);
    e1.displayInfo();
    cout << endl;
    e2.displayInfo();
    return 0;
}


//Create a class Book.
//Public: title, author; Private: price
//Setter: setPrice(); Getter: getPrice()
//Create object b1 and store:
//Atomic Habits
//James Clear
//499
#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    int price;
public:
    Book(string t, string a){
        title = t;
        author = a;
    }
    string title;
    string author;
    void getInfo(){
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
    }
    void setPrice(double p){
        price = p;
    }
    double getPrice(){
        return price;
    }
};
int main(){
    Book b1("Atomic Habits", "James Clear");
    b1.getInfo();
    b1.setPrice(499);
    cout << "Price : " << b1.getPrice() << endl;
    return 0;
}


//Create a class Student
//Public: name, rollNo; Private: cgpa
//Parameterized constructor; Getter: getCGPA(); Method: showDetails()
//Create:
//Student s1("Ananya", "2025UCP1901", 8.75);
//Print all details.
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    float cgpa;
public:
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


//Create a class BankAccount.
//Private: balance; Public: name
//Setter: deposit(); Getter: getBalance()
//Create an account, deposit ₹5000 and print final balance.
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    float balance;
public:
    string name;
    void deposit(float n){
        balance = n;
    }
    float getBalance(){
        return balance;
    }
};
int main(){
    BankAccount b1;
    b1.deposit(5000);
    cout << "Current Balance : " << b1.getBalance() << endl;
    return 0;
}


//Create a class Car.
//Public: brand, model
//Constructor should assign values using parameters.
//Method: showCar()
//Create:
//Car c1("Toyota", "Fortuner");
#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string brand;
    string model;
    Car(string b, string m){
        brand = b;
        model = m;
    }
    void showCar(){
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
    }
};
int main(){
    Car c1("Toyota", "Fortuner");
    c1.showCar();
    return 0;
}
