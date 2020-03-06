#include <iostream>
#include <sstream>
#include <stack>
#include <limits>
#include <string>
using namespace std;

int priority(char a) {
    int temp;
    if (a == '^')
        temp = 1;
    else  if (a == '*' || a == '/')
        temp = 2;
    else  if (a == '+' || a == '-')
        temp = 3;
    return temp;
}

int main() {
    string infix;
    cout << "Enter an arithmetic expression: " << endl;
    getline(cin, infix);

    stack<char> stk; //creates a stack of characters

    stringstream output;

    for (unsigned i = 0; i < infix.length(); i++) {
        if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^') {
            while (!stk.empty() && priority(stk.top()) <= priority(infix[i])) {
                output << stk.top();
                stk.pop();
            }
            stk.push(infix[i]);
        } else if (infix[i] == '(') {
            stk.push(infix[i]);
        } else if (infix[i] == ')') {
            while (stk.top() != '(') {
                output << stk.top();
                stk.pop();
            }
            stk.pop();
        } else {
            output << infix[i];
        }
    }

    while (!stk.empty()) {
        output << stk.top();
        stk.pop();
    }

    cout << output.str() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
