#include <iostream>
using namespace std;
int main()
{
    float nam1, nam2;
    char op;
    cin >> nam1>>nam2 >> op;
    switch (op) {
    case '+':
        cout << nam1 << "+" << nam2 << (nam1 + nam2);
    case '-':
        cout << nam1 << "-" << nam2 << (nam1 - nam2);
    case '*':
        cout << nam1 << "*" << nam2 << (nam1 * nam2);
    case '/':
        (nam2) ? cout << nam1 << "/" << nam2 << (nam1 / nam2) : cout << "incorrect operation";
    }
}

