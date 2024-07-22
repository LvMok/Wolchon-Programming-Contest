#include <iostream>

using namespace std;

int main(void)
{
	long long int a=0, b=0,c=1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		c *= a;
	}
	cout << c;
}