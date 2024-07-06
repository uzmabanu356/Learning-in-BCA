#include<conio.h>
#include <iostream.h>

jmp_buf exception_buffer;

void handleException() {
    std::cout << "Exception caught!" << std::endl;
}

void someFunction() {
    // Simulate an exception
    std::cout << "Throwing exception..." << std::endl;
    longjmp(exception_buffer, 1);
}

int main() {
    clrscr();
    if (setjmp(exception_buffer) == 0) {
        // Normal execution
        std::cout << "Normal execution..." << std::endl;
        someFunction();
        std::cout << "This line won't be reached." << std::endl;
    } else {
        // Exception handling
        handleException();
    }
    getch();      
    return 0;
}





