// Documentation Section:-
// Author : Farid F Khan
/* Written on 16 Dec 2023
   Program to demonstrate the basic structure of cpp*/

#include <iostream> // Linking Section
// using namespace std;  Part of linking section but not considered to be in good practice as a programmer
// using std::cout;  u can use specific obj from std namspace
using std::endl;

#define PI 3.14 // Defination Section

int r = 3;   // Global Declaration of variable r
void area(); // Global Decalaration of the function area.

// Class Defination
class MyClass
{
public:
    int a; // Data Member
    void display()
    { // Member Function
        std::cout << "Printing from MyClass" << endl;
    }
};

// Main Section
int main()
{
    MyClass MC;   // obj of MyClass
    MC.a = 5;     // Accessing Data Member through Object
    MC.display(); // Accessing Member function through Object
    area();       // functiion Calling
    std::cout << "Printing DataMember a from MyClass: " << MC.a << endl;
    std::cout << "Hello From Main Function!!" << endl;
    return 0;
}

// Subprogram section
void area()
{ // Function Defination
    float area;
    area = r * r * PI;
    std::cout << "Area from Area Function: " << area << endl;
}