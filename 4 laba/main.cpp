#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
    return true;
    return false;
}

int precedence(char c) {
    if (c == '+' || c == '-')
    return 1;
    if (c == '*' || c == '/')
    return 2;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;

    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == ' ')
            continue;

        if (isdigit(infix[i])) {
            while (isdigit(infix[i]) || infix[i] == '.') {
                postfix += infix[i];
                i++;
            }
            i--;
            postfix += ' ';
        }
        else if (isOperator(infix[i])) {
            while (!s.empty() && s.top() != '(' && precedence(s.top()) >= precedence(infix[i])) {
                postfix += s.top();
                s.pop();
                postfix += ' ';
            }
            s.push(infix[i]);
        }
        else if (infix[i] == '(') {
            s.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
                postfix += ' ';
            }
            s.pop();
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
        postfix += ' ';
    }

    return postfix;
}

double evaluatePostfix(string postfix) {
    stack<double> s;

    for (int i = 0; i < postfix.length(); i++) {
        if (postfix[i] == ' ')
            continue;

        if (isdigit(postfix[i])) {
            double n = 0;
            while (isdigit(postfix[i])) {
                n = n * 10 + (double)(postfix[i] - '0');
                i++;
            }
            if (postfix[i] == '.') {
                i++;
                double fraction = 1;
                while (isdigit(postfix[i])) {
                    fraction = fraction / 10;
                    n = n + fraction * (double)(postfix[i] - '0');
                    i++;
                }
            }
            i--;
            s.push(n);
        }
        else if (isOperator(postfix[i])) {
            double operand2 = s.top();
            s.pop();
            double operand1 = s.top();
            s.pop();
            if (postfix[i] == '+') {
                s.push(operand1 + operand2);
            }
            else if (postfix[i] == '-') {
                s.push(operand1 - operand2);
            }
            else if (postfix[i] == '*') {
                s.push(operand1 * operand2);
            }
            else if (postfix[i] == '/') {
                s.push(operand1 / operand2);
            }
        }
    }

    return s.top();
}

int main() {
    setlocale(0, "Ru");
    string infix;
    cout << "Введите инфиксное выражение: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Постфиксное выражение: " << postfix << endl;

    double result = evaluatePostfix(postfix);
    cout << "Результат: " << result << endl;

    return 0;
}