#include<iostream.h>
#include<conio.h>

void main() {
    clrscr();

    int numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            // Throw an integer exception if denominator is zero
            throw 1;
        }

        result = numerator / denominator;

        cout << "Result: " << result << endl;
    } catch (int ex) {
        // Catch the integer exception
        cout << "Exception caught: Division by zero!" << endl;
    } catch (...) {
        // Catch any other unexpected exceptions
        cout << "Unknown exception caught!" << endl;
    }

    getch();
}
