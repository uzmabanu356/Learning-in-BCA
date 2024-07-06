#include<iostream.h>
# include<conio.h>

class MyBoolean {
private:
    int value;

public:
    // Constructor
    MyBoolean(int initialValue) : value(initialValue) {}

    // Overloading unary not (!) operator
    MyBoolean operator!()
     {
        return MyBoolean(!value);
    }

    // Function to get the current value
    int getValue() const {
	return value;
    }
};

int main()
  {
      clrscr();
    // Create an object with initial value 1 (true)
    MyBoolean myBool(1);

    // Display the original value
    cout << "Original Value: " << (myBool.operator!().getValue() ? 1 : 0) << endl;
    getch();
    return 0;
}
