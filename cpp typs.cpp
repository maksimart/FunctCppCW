#include <iostream>
using namespace std;

const float PI = 3.1415926535;

int main()

{
	/*short a1 = SHRT_MIN;
	short a2 = SHRT_MAX;
	int b1 = INT32_MIN;
	int b2 = INT32_MAX;
	long long c1 = LLONG_MIN;
	long long c2 = LLONG_MAX;
	unsigned short d1 = 0;
	unsigned short d2 = USHRT_MAX;
	unsigned int d3 = UINT32_MAX;
	unsigned long long d4 = ULLONG_MAX;
	float n1 = FLT_MIN;
	float n2 = FLT_MAX;
	double m1 = DBL_MIN;
	double m2 = DBL_MAX;
	char l1 = 0;
	char l2 = 255;
	bool p1 = 0;
	bool p2 = 1;

	cout << "type\t|byte\t|min\t\t\t|max"<<endl;
	cout << "short\t|" << sizeof(a1) << "\t|" << a1 << "\t\t\t|" << a2 <<endl;
	cout << "int\t|" << sizeof(b1) << "\t|" << b1 << "\t\t|" << b2 << endl;
	cout << "llong\t|" << sizeof(c1) << "\t|" << c1 << "\t|" << c2 << endl;
	cout << "ushort\t|" << sizeof(d1) << "\t|" << d1 << "\t\t\t|" << d2 << endl;
	cout << "uint\t|" << sizeof(d3) << "\t|" << d1 << "\t\t\t|" << d3 << endl;
	cout << "ullong\t|" << sizeof(d4) << "\t|" << d1 << "\t\t\t|" << d4 << endl;
	cout << "float\t|" << sizeof(n1) << "\t|" << n1 << "\t\t|" << n2 << endl;
	cout << "doble\t|" << sizeof(m1) << "\t|" << m1 << "\t\t|" << m2 << endl;
	cout << "char\t|" << sizeof(l1) << "\t|" << l1 << "\t\t\t|" << l2 << endl;
	cout << "bool\t|" << sizeof(p1) << "\t|" << p1 << "\t\t\t|" << p2 << endl;*/
	//float a;
	//cout << "d;";
	//cin >> a;
	//cout << "L=" << PI * a;
	 
	//float h, b;
	//cout << "h;";
	//cin >> h;
	//cout << "b;";
	//cin >> b;
	//cout << "S=" << h * b / 2;

	//int a;
	//cout << "a;";
	//cin >> a;
	//cout << a/10 << " " << a % 10;

	////int a;
	////cout << "a;";
	////cin >> a;
	////cout << (a / 100)*(a/10%10)*(a % 10);

	//int a;
	//cout << "a;";
	//cin >> a;
	//*cout << ((a % 10)*100)+((a / 10 % 10)*10)+ a / 100;*/
	//*cout << a/1000 <<" "<< a / 100%10<<" "<< a / 10 % 10 <<" "<< a % 10;*/
	//cout << ((a % 10) * 1000) + ((a / 10 % 10) * 100) + ((a / 100 % 10) * 10) + a / 1000;

	int a,b,c,d;
	cin >> a >> b>>c>>d;
	if (a > b > c > d)  cout << a; 
	else if (b > a>c>d)  cout << b;
	else if (c > b>a>d)  cout << c;
	else cout << d;
	
}