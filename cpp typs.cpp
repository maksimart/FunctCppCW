#include <iostream>
using namespace std;

const float PI = 3.1415926535;

int main()

{
	int a,b,c,d;
	cin >> a >> b>>c>>d;
	if (a > b > c > d)  cout << a; 
	else if (b > a>c>d)  cout << b;
	else if (c > b>a>d)  cout << c;
	else cout << d;
	
}
