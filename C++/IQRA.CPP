#include <iostream.h>
#include<conio.h>
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Overloading the addition operator (+)
    Complex operator+(const Complex& other) {
	return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overloading the subtraction operator (-)
    Complex operator-(const Complex& other) {
	return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overloading the multiplication operator (*)
    Complex operator*(const Complex& other) {
	return Complex(
	    real * other.real - imaginary * other.imaginary,
	    real * other.imaginary + imaginary * other.real
	);
    }

    void display() {
	cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
     clrscr();
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c1 + c2 = ";
    sum.display();
    cout << "c1 - c2 = ";
    difference.display();
    cout << "c1 * c2 = ";
    product.display();

    return 0;
    getch();
    }