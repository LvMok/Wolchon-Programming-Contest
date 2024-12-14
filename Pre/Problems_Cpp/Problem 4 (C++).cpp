#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;

	cout << fixed;
	cout.precision(1);
	cout << (c - b) / a;
}