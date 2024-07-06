#include <iostream.h>
#include<conio.h>
class MyClass {
public:
    int data;

    // Copy constructor
    MyClass(const MyClass& other) {
        data = other.data;
    }

    // Constructor
    MyClass(int value) {
        data = value;
    }
};

int main() {
	clrscr();
    MyClass obj1(42); // Create an object and initialize it with 42

    MyClass obj2 = obj1; // Use the copy constructor to create obj2 as a copy of obj1

    cout << "obj1.data: " << obj1.data << endl;
    cout << "obj2.data: " << obj2.data << endl;

    getch();
    return 0;
}
