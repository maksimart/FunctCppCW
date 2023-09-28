#include <iostream>
using namespace std;
int main()
{
    //int a,b;
    //cin >> a;
    //cin >> b;
    //cout << ((a > b) ? "a>b" : "a<b");

    //int a;
    //cin >> a;
    //if (a == 0)cout << "0";
    //else if (cout << ((a % 2 == 0) ? "chet" : "nechet"));

    //int a,b,c;
    //cin >> a >> b >> c;
    //cout << float(a + b + c) / 3;

    //int a, b, c;
    //cin >> a >> b >> c;
    //cout << ((a > b && a < c) ? "da" : "ne");

    //int a, b, c, d,max;
    //cin >> a >> b >> c >> d;
    //max = 0;
    //if (a > max)max = a;
    //if (b > max)max = b;
    //if (c > max)max = c;
    //if (d > max)max = d;
    //cout << max;

    //int a;
    //cin >> a;
    //if (a == 0)cout<<"zero";
    //else if (a == 1)cout << "one";
    //else if (a == 2)cout << "two";
    //else if (a == 3)cout << "three";
    //else if (a == 4)cout << "four";
    //else if (a == 5)cout << "five";
    //else if (a == 6)cout << "six";
    //else if (a == 7)cout << "seven";
    //else if (a == 8)cout << "eight";
    //else if (a == 9)cout << "nine";
    
    //int a;
    //cin >> a;
    //switch (a) {
    //case 1:
    //    cout << "winter";
    //    break;
    //case 2:
    //    cout << "winter";
    //    break;
    //case 3:
    //    cout << "spring";
    //    break;
    //case 4:
    //    cout << "spring";
    //    break;
    //case 5:
    //    cout << "spring";
    //    break;
    //case 6:
    //    cout << "summer";
    //    break;
    //case 7:
    //    cout << "summer";
    //    break;
    //case 8:
    //    cout << "summer";
    //    break;
    //case 9:
    //    cout << "autumn";
    //    break;
    //case 10:
    //    cout << "autumn";
    //    break;
    //case 11:
    //    cout << "autumn";
    //    break;
    //case 12:
    //    cout << "winter";
    //    break;
    //default:
    //    cout << "brike kommand";
    //    break;
    //}

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

