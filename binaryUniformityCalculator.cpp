#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if the number of 1's in the binary representation is odd
bool isOddOnes(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count % 2 != 0;
}

int main() {
    stack<char> charStack;
    int choice;
    char ch;

    do {
        // cout << "Enter your choice (1: Push, 2: Pop, 3: Display, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter character to push onto stack: ";
                cin >> ch;
                charStack.push(ch);
                cout << "Pushed: " << ch << endl;
                break;
            case 2:
                if (!charStack.empty()) {
                    ch = charStack.top();
                    charStack.pop();
                    cout << "Popped: " << ch << endl;
                } else {
                    cout << "Stack is empty. Nothing to pop." << endl;
                }
                break;
            case 3:
                if (!charStack.empty()) {
                    cout << "Stack elements: ";
                    stack<char> tempStack;
                    while (!charStack.empty()) {
                        cout << charStack.top() << " ";
                        tempStack.push(charStack.top());
                        charStack.pop();
                    }
                    cout << endl;
                    // Restoring the original stack
                    while (!tempStack.empty()) {
                        charStack.push(tempStack.top());
                        tempStack.pop();
                    }
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
