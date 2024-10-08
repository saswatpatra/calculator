// To run the code, copy this link - https://www.programiz.com/online-compiler/33aaB27yNJFuz and paste in your browser's new tab.

#include <iostream>
using namespace std;

void Help() {
    cout << "\nHelp - Operation Guide:\n";
    cout << "1: Addition (+) - Adds two numbers and gives the sum.\n";
    cout << "2: Subtraction (-) - Subtracts the second number from the first.\n";
    cout << "3: Multiplication (*) - Multiplies two numbers.\n";
    cout << "4: Division (/) - Divides the first number by the second (ensure the second number isn't zero).\n";
    cout << "5: Modulus (%) - Finds the remainder when the first number is divided by the second (for integers).\n";
    cout << "Select any operation to perform or 0 to view this help again.\n" << endl;
}

int main() {
    int operation;
    float num1, num2, result;

    cout << "Welcome To Calculator in C++\n" << endl;

    while (true) {
        cout << "Select Your Desired Operation By Typing - \n" << endl;
        cout << "0 for Help" << endl;
        cout << "1 for Addition (+)" << endl;
        cout << "2 for Subtraction (-)" << endl;
        cout << "3 for Multiplication (*)" << endl;
        cout << "4 for Division (/)" << endl;
        cout << "5 for Modulus (%)" << endl;

        cin >> operation;

        if (operation == 0) {
            Help();
            continue;
        }

        while (operation < 1 || operation > 5) {
            cout << "Invalid input. Please enter a valid number from 1 to 5:\n";
            cin >> operation;
        }

        string operationName;
        switch (operation) {
            case 1: operationName = "Addition"; break;
            case 2: operationName = "Subtraction"; break;
            case 3: operationName = "Multiplication"; break;
            case 4: operationName = "Division"; break;
            case 5: operationName = "Modulus"; break;
        }

        cout << "You Selected " << operationName << endl;
        cout << "Now, Enter the first number and click enter:\n";
        cin >> num1;
        cout << "Great, Now enter the second number and click enter:\n";
        cin >> num2;

        switch (operation) {
            case 1: 
                result = num1 + num2;
                cout << "Result of " << num1 << " + " << num2 << " is = " << result << endl;
                break;
            case 2: 
                result = num1 - num2;
                cout << "Result of " << num1 << " - " << num2 << " is = " << result << endl;
                break;
            case 3: 
                result = num1 * num2;
                cout << "Result of " << num1 << " * " << num2 << " is = " << result << endl;
                break;
            case 4: 
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result of " << num1 << " / " << num2 << " is = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5: 
                if (num2 != 0) {
                    result = (int)num1 % (int)num2; 
                    cout << "Result of " << (int)num1 << " % " << (int)num2 
                    << " is = " << result << endl;
                } else {
                    cout << "Error: Modulus by zero!" << endl;
                }
                break;
        }

        break; 
    }

    return 0;
}
