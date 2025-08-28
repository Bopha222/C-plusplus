#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    
    do {
        // Display menu
        cout << "\n==== Menu ====\n";
        cout << "1. Greet\n";
        cout << "2. Calculate factorial\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            cout << "Enter your name: ";
            cin.ignore(); 
            getline(cin, name);
            cout << "Hello, " << name << "! Nice to meet you.\n";
        }
        else if (choice == 2) {
            int n;
            unsigned long long factorial = 1;
            cout << "Enter a positive integer: ";
            cin >> n;
            if (n < 0) {
                cout << "Factorial is not defined for negative numbers.\n";
            } else {
                for (int i = 1; i <= n; i++) {
                    factorial *= i;
                }
                cout << n << "! = " << factorial << endl;
            }
        }
        else if (choice == 0) {
            cout << "Exiting program. Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
