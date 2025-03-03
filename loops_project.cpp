#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    bool exit = false; // Variable to control the loop
    int menuChoice; // Variable to store user's menu choice

    do {
        // Display the menu
        cout << " " << endl;
        cout << "^^^^^^^^^ Interactive Utility Program ^^^^^^^^^" << endl;
        cout << "1. Factorial Calculator" << endl;
        cout << "2. Number Pyramid" << endl;
        cout << "3. Sum of Even or Odd Numbers" << endl;
        cout << "4. Reverse a String" << endl;
        cout << "5. Exit" << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

        cout << "Enter your choice: ";
        cin >> menuChoice; // Read user's menu choice
        cout << endl;

        switch (menuChoice) {
            case 1: {

                int N; // Variable to store the number for factorial calculation

                cout << "Enter a positive integer: ";
                cin >> N;
                cout << endl;

                int originalNum = N; // Store the original number
                int sum = 1; // Initialize sum to 1 for factorial calculation

                if (N > 0) {

                    while (N > 1) {

                        sum = sum * N; // Calculate factorial
                        N = N - 1;

                    }

                    cout << "The Factorial of " << originalNum << " is: " << sum << endl;

                } else {

                    cout << "Integer is not valid." << endl; // Error message for non-positive integer

                }
                break;
            }
            case 2: {

                int rows; // Variable to store the number of rows for the pyramid

                cout << "Enter number of rows: ";
                cin >> rows;
                cout << endl;

                if (rows <= 0) {

                    cout << "Invalid number of rows." << endl; // Error message for invalid rows

                } else {

                    for (int i = 1; i <= rows; i++) {
                        // Print spaces
                        for (int j = i; j < rows; j++) {
                            cout << " ";
                        }
                        // Print numbers
                        for (int k = 1; k <= i; k++) {
                            cout << k << " ";
                        }
                        cout << endl;
                    }
                }
                break;
            }
            case 3: {

                int N, total = 0; // Variables for upper limit and total sum
                int choice; // Variable to store user's choice for odd/even sum

                cout << "Choose Sum of (1)Odd or (2)Even Numbers: ";
                cin >> choice;
                cout << endl;

                if (choice == 1) { // For Sum of Odd Number

                    cout << "Enter an odd upper limit: ";
                    cin >> N;
                    cout << endl;

                    if (N % 2 == 0) { // Verify that upper limit is an odd number

                        cout << N << " is not an odd number. Try again." << endl;
                        break;
                    }
                    

                    int originalNum = N; // Store the original number

                    do {

                        total = total + N; // Calculate sum of odd numbers
                        N = N - 2;

                    } while (N > 0);

                    cout << "Sum of Odd numbers up to " << originalNum << " is: " << total << endl;

                } else if (choice == 2) { // For Sum of Even Number

                    cout << "Enter an even upper limit: ";
                    cin >> N;
                    cout << endl;

                    if (N % 2 != 0) { // Verify that upper limit is an even number

                        cout << N << " is not an even number. Try again." << endl;
                        break;
                    }

                    int originalNum = N; // Store the original number

                    do {

                        total = total + N; // Calculate sum of even numbers
                        N = N - 2;

                    } while (N > 0);

                    cout << "Sum of Even numbers up to " << originalNum << " is: " << total << endl;

                } else {

                    cout << "Please Select either: 1 for Odd or 2 for Even." << endl; // Error message for invalid choice
                }
                break;
            }
            case 4: {

                string str, reversedStr; // Variables for the original and reversed strings

                cout << "Enter a string: ";
                cin >> str;
                cout << endl;

                int length = str.length(); // Get the length of the string
                int i = length - 1; // Initialize index to the last character

                while (i >= 0) {

                    reversedStr += str[i]; // Add characters in reverse order
                    i--;
                }

                cout << "Reversed string: " << reversedStr << endl;
                break;
            }
            case 5:

                cout << "Have a good one, goodbye!" << endl;
                exit = true; // Set exit to true to end the loop
                break;
            default:
                cout << "Please choose a valid option." << endl; // Error message for invalid menu choice
        }

    } while (exit == false); // Loop until exit is true

    return 0;
}