#include <iostream>
#include <string>
#include <vector>

// using namespace std;

// class Person // parent class
// {
// protected:
//     string first;
//     string last;

// public:
//     Person(string first, string last)
//     {
//         this->first = first;
//         this->last = last;
//     }

//     void setFirstName(string first)
//     {
//         this->first = first;
//     }
//     void setLastName(string last)
//     {
//         this->last = last;
//     }

//     string getName()
//     {
//         return first + " " + last;
//     }
//     void printFullname()
//     {
//         cout << first << " " << last << endl;
//     }

//     virtual void printInfo()
//     {
//         cout << "first name: " << first << endl;
//         cout << "last name: " << last << endl;
//     }
// };
// class Employee : public Person // derived class 繼承person
// {
// private:
//     string department;

// public:
//     Employee(string firstName, string lastName, string department) : Person(firstName, lastName)
//     {
//         this->department = department;
//     } // constructor

//     // department(department) 相當於this->department=department;

//     // Employee(string firstName, string lastName, string department) : Person(firstName, lastName), department(department)
//     // {
//     // } // constructor

//     string getDepartment()
//     {
//         return department;
//     } // getter

//     void setDepartment(string department)
//     {
//         this->department = department;
//     } // setter

//     void printInfo() override
//     {
//         cout << "first name: " << first << endl;
//         cout << "last name: " << last << endl;
//     }
// };

// int main()
// {
//     vector<Person *> people;
//     Person p("bill", "gates");
//     Employee e("elon", "musk", "ceo");

//     people.push_back(&p);
//     people.push_back(&e);

//     for (auto person : people)
//     {
//         person->printInfo();
//     }

//     return 0;
// }

// C++ program to demonstrate
// function overloading or
// Compile-time Polymorphism

// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism

// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
// #include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};

// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4);

    // An example call to "operator+"

    Complex c3 = c1 + c2; //==c3 = c1.operator+(c2);

    c3.print();
}
